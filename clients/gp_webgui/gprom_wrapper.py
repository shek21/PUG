import subprocess
from time import sleep

def run_command(command):
    p = subprocess.Popen(command,
                         stdout=subprocess.PIPE,
                         stderr=subprocess.PIPE,
                         shell=True)
    # This ensures the process has completed, AND sets the 'returncode' attr
    while p.poll() is None:
        sleep(.1) # sleep until finished
    # Read buffers
    err = p.stderr.read()
    std = p.stdout.read()
    errcode = p.returncode
    return err, std, errcode

################################################################################
# Wrapper around the gprom commandline client for easy python access
class GProMWrapper:
   'Wrapper around the gprom commandline'

   # stores connection parameters and other gprom options
   def __init__(self, user='fga_user', passwd='fga', host='ligeti.cs.iit.edu', port='1521', db='orcl', frontend='dl', backend='oracle', plugins={ 'executor' : 'run' }):
      self.user = user
      self.passwd = passwd
      self.host = host
      self.port = port
      self.db = db
      self.frontend = frontend
      self.backend = backend
      self.plugins = plugins
   
   def constructCommand(self,query,loglevel=0,plugins={}):
       gprom_cmd=['gprom','-loglevel',loglevel,'-backend',self.backend,'-frontend',self.frontend]
       # set connection options
       gprom_cmd+=['-user',self.user,'-passwd',self.passwd,'-host',self.host,'-port',self.port,'-db',self.db]
       # setup plugins
       for key, value in self.plugins.iteritems():
           if plugins.has_key(key):
               gprom_cmd+=['-P'+key, plugins[key]]
           else:
               gprom_cmd+=['-P'+key, value]
       # pass quoted query
       quotedQuery='$\'' + query.replace("'","\\\'") + '\''
       gprom_cmd+=['-query', quotedQuery]
       # create one string
       gprom_cmd=' '.join(map(str,gprom_cmd))
       print gprom_cmd
       return gprom_cmd

   def executeAndCollectErrors(self,query,errorloglevel=3,mode='run'):
       runPlugins={'executor':mode}
       orig_cmd=self.constructCommand(query,plugins=runPlugins)
       err, std, errcode = run_command(orig_cmd)
       if errcode != 0:
           debug_cmd=self.constructCommand(query,errorloglevel,plugins=runPlugins)
           err, std, errcode = run_command(debug_cmd)
           return errcode, std + '\n' + err
       return 0, std
   
   def createDotFile (self,query,dotfile):
       errcode, output = self.executeAndCollectErrors(query,mode='gp')
       if errcode != 0:
           return errcode, output
       writer = open(dotfile, 'w')
       writer.write(output)
       writer.close()
       return 0, ''

   def runGraphviz (self,dotfile,imagepath):
       dot_cmd=['dot','-Tsvg','-o',imagepath,dotfile]
       err, std, errcode = run_command(' '.join(dot_cmd))
       return errcode, err
   
   def generateProvGraph (self,query,imagepath,dotfile):
       gprom_return, gprom_log = self.createDotFile(query,dotfile)
       if gprom_return == 0:
           dot_return, dot_log = self.runGraphviz(dotfile,imagepath)
       else:
           dot_return, dot_log = 0, ''
       return (gprom_return + dot_return), gprom_log, dot_log

   def runDLQuery (self,query,mode='run'):
       errcode, output = self.executeAndCollectErrors(query,mode=mode)
       return errcode, output
   
# w = GProMWrapper()
# #cmd = w.constructCommand('Q(X):-R(X,Y).')
# #print cmd
# #err, std, errcode = run_command(cmd)
# #print err, std, errcode
# #errcode, glog,dlog = w.generateProvGraph('Q(X):-R(X,Y).WHY(Q(1)).','test.png', 'test.dot')
# #print errcode, glog, dlog
# code,st = w.runDLQuery('Q(X) :- R(X,Y).')
# #print st
# lines=st.split('\n')
# numAttr=lines[0].count('|')
# lines=[ l for l in lines if not(not l or l.isspace()) ]
# lines=map(lambda x: '| ' + x + 'X', lines)
# lines[1] = '|' + (' -- | ' * numAttr)
# result='\n'.join(lines)
# print result
