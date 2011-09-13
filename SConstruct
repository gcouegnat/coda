# env = Environment()
# Export('env')
# SConscript('SConscript', variant_dir='build', duplicate=0)

import os, sys


env=Environment()

env.Replace(CXX="g++")

debug=ARGUMENTS.get("debug", 0)
if int(debug):
	env.Append(CCFLAGS="-g -O0")
else:
#	env.Append(CCFLAGS="-O2 -Wall -ffast-math -fstrict-aliasing -march=nocona -msse2")	
	env.Append(CCFLAGS="-O3")	


env.Append(CPPPATH=".")
env.Append(CCFLAGS="-DTERM_WITH_COLORS")

# BLAS
if sys.platform=="darwin":
	env['FRAMEWORKS']+= ['Accelerate']
	env.Append(LINKFLAGS="-framework Accelerate");


lib_target = "coda"
lib_source = Glob('coda/*/*.cpp')

#env.Library(lib_target, lib_source)
env.Library(lib_target, lib_source)

env.Program("run",['main.cpp'],LIBS=['coda'],LIBPATH=['.'])
env.Program("bench",['benchmark.cpp'],LIBS=['coda','armadillo'],LIBPATH=['.'])