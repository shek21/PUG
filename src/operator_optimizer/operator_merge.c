/*-----------------------------------------------------------------------------
 *
 * operator_merge.c
 *			  
 *		
 *		AUTHOR: lord_pretzel
 *
 *		
 *
 *-----------------------------------------------------------------------------
 */

#include "model/query_operator/query_operator.h"
#include "model/query_operator/schema_utility.h"
#include "model/expression/expression.h"
#include "model/list/list.h"
#include "model/node/nodetype.h"
#include "mem_manager/mem_mgr.h"
#include "operator_optimizer/operator_merge.h"

/* state */
typedef struct ReplaceRefState {
    List *projExpr;
    ProjectionOperator *op;
} ReplaceRefState;

/* declarations */
static Node *replaceAttributeRefsMutator (Node *node, ReplaceRefState *state);


SelectionOperator *
mergeSelection(SelectionOperator *op)
{
    while(isA(OP_LCHILD(op),SelectionOperator))
    {
        SelectionOperator *child = (SelectionOperator *) OP_LCHILD(op);

        // and condition and link child's children to root
        op->cond = (Node *) createOpExpr("AND", LIST_MAKE(op->cond, child->cond));
        op->op.inputs = child->op.inputs;

        // clean up child
        child->cond = NULL;
        child->op.inputs = NULL;
        deepFree(child);
    }

    return op;
}

ProjectionOperator *
mergeProjection(ProjectionOperator *op)
{
    ReplaceRefState *state = NEW(ReplaceRefState);

    while(isA(OP_LCHILD(op),ProjectionOperator))
    {
        ProjectionOperator *child = (ProjectionOperator *) OP_LCHILD(op);

        // combine expressions and link child's children to root
        state->op = child;
        state->projExpr = child->projExprs;

        op->projExprs = (List *) replaceAttributeRefsMutator((Node *) op->projExprs, state);
        op->op.inputs = child->op.inputs;

        // clean up child
        child->projExprs = NULL;
        child->op.inputs = NULL;
        deepFree(child);
    }

    state->op = NULL;
    state->projExpr = NULL;
    FREE(state);
    return op;
}

static Node *
replaceAttributeRefsMutator (Node *node, ReplaceRefState *state)
{
    if (node == NULL)
        return NULL;

    if (isA(node, AttributeReference))
    {
        AttributeReference *a = (AttributeReference *) node;
        int pos = getAttributeNum(a->name, (QueryOperator *) state->op);
        deepFree(a);

        return copyObject(getNthOfListP(state->projExpr, pos));
    }

    return mutate(node, replaceAttributeRefsMutator, state);
}