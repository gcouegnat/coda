EnsureSConsVersion(1,2)
import os,sys,platform

vars = Variables()
vars.Add(EnumVariable('mode', 'Compilation mode','debug', allowed_values =('optim','debug','extra_debug')))
vars.Add(EnumVariable('backend', 'Parallel backend', 'none' , allowed_values =('none','omp','cuda')))
vars.Add(EnumVariable('blas','BLAS backend','veclib',allowed_values=('veclib','gotoblas')))
env=Environment(variables = vars)

Help(vars.GenerateHelpText(env))

#env.Replace(CXX="/usr/bin/g++")

mode=env['mode']

if mode == 'debug':
  env.Append(CXXFLAGS=['-Wall','-g'])
elif mode == 'extra_debug':
  env.Append(CXXFLAGS=['-Wall','-Werror','-g','-O0','-DCODA_EXTRA_DEBUG'])
elif mode == 'optim':
  env.Append(CXXFLAGS=['-O3', '-DNDEBUG','-funroll-loops'])

blas = env['blas']
if blas == 'gotoblas':
  env.Append(CXXFLAGS=['-DCODA_WITH_GOTOBLAS'])
#  env.Append(LIBPATH=['/Users/couegnat/lib'])
  env.Append(LIBPATH=['/opt/hpc/lib'])
  env.Append(LIBS=['goto2','gfortran'])
elif blas == 'veclib':
  env.Append(CXXFLAGS=['-DCODA_WITH_VECLIB'])
  env['FRAMEWORKS']+= ['Accelerate']


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
Default('lib')

Alias('all',['lib','test'])
