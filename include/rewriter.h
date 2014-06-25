/*-----------------------------------------------------------------------------
 *
 * rewriter.h
 *		
 *
 *		AUTHOR: lord_pretzel
 *
 *-----------------------------------------------------------------------------
 */

#ifndef REWRITER_H_
#define REWRITER_H_

#include "common.h"

extern int initBasicModulesAndReadOptions (char *appName, char *appHelpText, int argc, char* argv[]);
extern void setupPluginsFromOptions(void);
extern int readOptionsAndIntialize(char *appName, char *appHelpText, int argc, char* argv[]);

#define READ_OPTIONS_AND_INIT(app,helpText) \
    do { \
        int _retVal = readOptionsAndIntialize(app, helpText, argc, argv); \
        if (_retVal != EXIT_SUCCESS) \
        return EXIT_FAILURE;    \
    } while(0)

extern char *rewriteQuery(char *input);
extern char *rewriteQueryFromStream (FILE *stream);
extern char *rewriteQueryWithOptimization(char *input);

#endif /* REWRITER_H_ */
