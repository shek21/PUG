from flask import Flask, render_template, request, redirect, url_for, abort, session
from gprom_wrapper import GProMWrapper
from hashlib import md5
from ansi2html import Ansi2HTMLConverter
import markdown
#import cx_Oracle

@app.route('/')
def home():
    return render_template('index.html')

@app.route('/querysubmit', methods=['POST'])
def querysubmit():
    session['query'] = request.form['query']
    if request.form.has_key('genquery'):
        session['action'] = 'run'
    elif request.form.has_key('genprovgame'):
	session['action'] = 'provgame'
    elif request.form.has_key('genprovgraph'):
        session['action'] = 'provgraph'
    elif request.form.has_key('gentriograph'):
        session['action'] = 'triograph'
    elif request.form.has_key('genlingraph'):
        session['action'] = 'lingraph'
    return redirect(url_for('showgraph'))

@app.route('/showgraph')
def showgraph():
    if not 'query' in session:
        return abort(403)
    w = GProMWrapper()
    query = session['query']
    action = session['action']
    conv = Ansi2HTMLConverter()
    # generate a graph
    provQuest = query.find('WHY')
    lines=[]
    if action == 'provgame' or action == 'provgraph' or action == 'triograph' or action == 'lingraph':
	if provQuest > 0:
            if action == 'provgraph':
		query = query[:query.find('))')] + ')) FORMAT REDUCED_GP.'
#		graphFormat = query.find('FORMAT')
#		if graphFormat < 1:
#		    query = query[:-1] + ' FORMAT REDUCED_GP.'
            if action == 'triograph':
		query = query[:query.find('))')] + ')) FORMAT HEAD_RULE_EDB.'
#		graphFormat = query.find('FORMAT')
#		if graphFormat < 1:
#		    query = query[:-1] + ' FORMAT TUPLE_RULE_TUPLE.'
            if action == 'lingraph':
		query = query[:query.find('))')] + ')) FORMAT TUPLE_ONLY.'
#		graphFormat = query.find('FORMAT')
#		if graphFormat < 1:
#		    query = query[:-1] + ' FORMAT TUPLE_ONLY.'
  	    if action == 'provgame':
	        query = query[:query.find('))')] + ')).'
            queryResult = ''
            queryhash = md5(query).hexdigest()
            imagefile = queryhash + '.svg'
            absImagepath = 'static/' + imagefile
            returncode, gpromlog, dotlog = w.generateProvGraph(query, absImagepath, 'tmp/pg.dot')
            gpromlog = conv.convert(gpromlog,full=False)
            dotlog = conv.convert(dotlog,full=False)
	else:
            queryResult = ''
	    gpromlog, dotlog, imagefile='','',''
    # output query results (translate into html table)
    else:
        returncode, gpromlog = w.runDLQuery(query)
        queryResult = gpromlog
        gpromlog = conv.convert(gpromlog,full=False)
        if returncode == 0:
            lines=queryResult.split('\n')
            numAttr=lines[0].count('|')
            lines=[ l for l in lines if not(not l or l.isspace()) ]
            lines=map(lambda x: '| ' + x + 'X', lines)
            if len(lines) > 1:
                lines[1] = '|' + (' -- | ' * numAttr)
            else:
                lines += ['|' + (' -- | ' * numAttr)]
            queryResult='\n'.join(lines)
            md = markdown.Markdown(extensions=['tables'])
            queryResult = md.convert(queryResult)
        dotlog, imagefile='',''
    # input db results
    returncode, dblog = w.runInputDB(query)        
    inputDB = dblog
    dblog = conv.convert(dblog,full=False)
    rels = []
    if returncode == 0:
        lines=inputDB.split('\n')
	# collect relation names
	for eachel in lines:
	    if eachel.count('|') < 1 and eachel.count('-') < 1 and len(eachel) > 0:
		rels += [eachel]
#	# output relations
#	relpoint = 0
#	spoint = len(rels)
#	for eachrel in rels:
#	    # relation name
#	    relDB = eachrel
#	    # tuples
#	    if relpoint < len(rels) - 1:
#		if len(rels) > 1:
#		    relpoint = rels.index(eachrel) + 1
#		    nextrel = rels[relpoint]	
#		    spoint = lines.index(nextrel) + 1
#		insline=lines[1:spoint]
#	    else:
#		insline=lines[spoint:len(lines)]
#            numAttr=insline[0].count('|')
#            insline=[ l for l in insline if not(not l or l.isspace()) ]
#    	    insline=map(lambda x: '| ' + x + 'X', insline)
#            if len(insline) > 1:
#	        insline[1] = '|' + (' -- | ' * numAttr)
#            else:
#                insline += ['|' + (' -- | ' * numAttr)]
#            insDB='\n'.join(insline)
#            md = markdown.Markdown(extensions=['tables'])
#            insDB = md.convert(insDB)    
##	    reline=lines[0:lines.index(eachrel)]
##            reline=[ l for l in reline if not(not l or l.isspace()) ]
##	    reline=map(lambda x: 'Database Relation ' + x, eachrel)
##    	    relDB=''.join(reline)
##	    md = markdown.Markdown(reline[0], extensions=['markdown.extensions.smart_strong'])
##	    relDB = md.convert(relDB)
##  	    insline=lines[1:10]
##            numAttr=insline[0].count('|')
##            insline=[ l for l in insline if not(not l or l.isspace()) ]
##    	    insline=map(lambda x: '| ' + x + 'X', insline)
##            if len(insline) > 1:
##	        insline[1] = '|' + (' -- | ' * numAttr)
##            else:
##                insline += ['|' + (' -- | ' * numAttr)]
##            insDB='\n'.join(insline)
##            md = markdown.Markdown(extensions=['tables'])
##            insDB = md.convert(insDB)
    return render_template('queryresult.html', query=session['query'], gpromlog=gpromlog, dotlog=dotlog, imagefile=imagefile, returnedError=(returncode != 0), action=action, queryResult=queryResult, lines=lines, rels=rels)

if __name__ == '__main__':
    app.run()
