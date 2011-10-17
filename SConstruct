EnsureSConsVersion(1,2)
import os,sys,platform

vars = Variables()
vars.Add(EnumVariable('mode', 'Compilation mode','debug', allowed_values =('optim','debug','extra_debug')))
vars.Add(EnumVariable('backend', 'Parallel backend', 'none' , allowed_values =('none','omp','cuda')))
env=Environment(variables = vars)

Help(vars.GenerateHelpText(env))

#env.Replace(CXX="/usr/bin/g++")

mode=env['mode']

if mode == 'debug':
  env.Append(CXXFLAGS=['-Wall','-g'])
elif mode == 'extra_debug':
  env.Append(CXXFLAGS=['-Wall','-Werror','-g','-O0','-DCODA_EXTRA_DEBUG'])
elif mode == 'optim':
  env.Append(CXXFLAGS=['-O3', '-DNDEBUG','-funroll-loops','-mtune=native'])

if sys.platform=="darwin":
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
