EnsureSConsVersion(1,2)

import os,sys,platform

vars = Variables()
vars.Add(EnumVariable('mode', 'Compilation mode','debug', allowed_values =('optim','debug','extra_debug')))
vars.Add(EnumVariable('backend', 'Parallel backend', 'none' , allowed_values =('none','omp','cuda')))
vars.Add(EnumVariable('blas','BLAS backend','default',allowed_values=('default','veclib','gotoblas','atlas','generic')))
env=Environment(variables = vars)
Help(vars.GenerateHelpText(env))

env.Replace(CXX="/opt/local/bin/g++")

#------------------------------------------------------------------------------
# Compilation mode
#------------------------------------------------------------------------------
mode=env['mode']
if mode == 'debug':
  env.Append(CXXFLAGS=['-Wall','-g'])
elif mode == 'extra_debug':
  env.Append(CXXFLAGS=['-Wall','-Werror','-g','-O0','-DCODA_EXTRA_DEBUG'])
elif mode == 'optim':
  env.Append(CXXFLAGS=['-O3', '-DNDEBUG','-funroll-loops','-ftree-vectorize'])

#------------------------------------------------------------------------------
# BLAS library 
#------------------------------------------------------------------------------
blas = env['blas']
if blas == 'default':
  if platform.system()=='Darwin':
    blas = 'veclib'
  elif platform.system()=='Linux':
    blas = 'gotoblas'

if blas == 'gotoblas':
  env.Append(CXXFLAGS=['-DCODA_WITH_GOTOBLAS'])
  if platform.system()=='Darwin':
    env.Append(LIBPATH=['/Users/couegnat/lib'])
    env.Append(LIBS=['goto2','gfortran'])
  if platform.system()=='Linux':
    env.Append(LIBPATH=['/opt/hpc/lib'])
    env.Append(LIBS=['goto2','gfortran'])
elif blas == 'veclib':
  if platform.system()=='Darwin':
    env.Append(CXXFLAGS=['-DCODA_WITH_VECLIB'])
    env['FRAMEWORKS']+= ['Accelerate']
  else:
    print "ERROR: veclib is only available on mac platform"
    sys.exit();
elif blas == 'generic':
  env.Append(CXXFLAGS=['-DCODA_WITH_GENERICBLAS'])
  env.Append(LIBS=['cblas','blas','lapack'])
elif blas == 'atlas':
  env.Append(CXXFLAGS=['-DCODA_WITH_ATLAS'])
  if platform.system()=='Darwin':
    env.Append(LIBPATH=['/opt/local/lib'])
  elif platform.system=='Linux':
    env.Append(LIBPATH=['/opt/hpc/lib'])
  env.Append(LIBS=['ptlapack','ptf77blas','ptcblas','atlas'])
    

#------------------------------------------------------------------------------
# Parallel backend
#------------------------------------------------------------------------------
backend = env['backend']
if backend == 'omp':
  env.Append(CXXFLAGS=['-fopenmp'])
  env.Append(LIBS=['gomp'])


coda_dir = os.getcwd()
env.Append(CPPPATH=[coda_dir])
env.Append(LIBPATH=[coda_dir+'/lib'])

Export('env')
lib = SConscript('lib/SConscript')
test = SConscript('test/SConscript')

Alias('all',['lib','test'])
Default('all')
