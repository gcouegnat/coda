import os, sys

env=Environment()

#env.Replace(CXX="/usr/bin/g++")

debug=ARGUMENTS.get("debug", 1)

if int(debug)==0:
  env.Append(CCFLAGS="-O3 -funroll-loops -DNDEBUG -DCODA_NO_DEBUG -DARMA_NO_DEBUG")

if int(debug)==1:
  env.Append(CCFLAGS="-g -O2")

if int(debug)==2:
  env.Append(CCFLAGS="-g -O0 -DCODA_EXTRA_DEBUG")

if sys.platform=="darwin":
  env['FRAMEWORKS']+= ['Accelerate']

coda_dir = os.getcwd()
env.Append(CPPPATH=[coda_dir])
env.Append(LIBPATH=[coda_dir+'/lib'])

Export('env')
lib = SConscript('lib/SConscript')
test = SConscript('test/SConscript', variant_dir='bin', duplicate=0)
Default('lib')

Alias('all',['lib','test'])
