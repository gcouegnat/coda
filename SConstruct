# env = Environment()
# Export('env')
# SConscript('SConscript', variant_dir='build', duplicate=0)

import os, sys


env=Environment()

env.Replace(CXX="g++")

debug=ARGUMENTS.get("debug", 0)
if int(debug):
	env.Append(CCFLAGS="-g -O0 -DDEBUG")
else:
#	env.Append(CCFLAGS="-O1 -ffast-math -fstrict-aliasing")
#	env.Append(CCFLAGS="-O3 -fstrict-aliasing -funroll-loops")
	env.Append(CCFLAGS="-O3")

env.Append(CPPPATH=".")
env.Append(CCFLAGS="-DTERM_WITH_COLORS")

# BLAS
if sys.platform=="darwin":
	env['FRAMEWORKS']+= ['Accelerate']
	env.Append(LINKFLAGS="-framework Accelerate")

#env.Append(LINKFLAGS=['-fopenmp'])


lib_target = "coda"
lib_source = Glob('coda/*/*.cpp')

#env.Library(lib_target, lib_source)
env.Library(lib_target, lib_source)
run = env.Program("run",['main.cpp'],LIBS=['coda'],LIBPATH=['.'])
env.Program("benchmark",['benchmark.cpp'],LIBS=['coda','armadillo'],LIBPATH=['.'])

Default(run)