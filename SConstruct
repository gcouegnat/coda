# env = Environment()
# Export('env')
# SConscript('SConscript', variant_dir='build', duplicate=0)

import os, sys


env=Environment()

env.Replace(CXX="g++")

debug=ARGUMENTS.get("debug", 1)

if int(debug)==0:
	env.Append(CCFLAGS="-O3 -funroll-loops -DNDEBUG -DCODA_NO_DEBUG -DARMA_NO_DEBUG")

if int(debug)==1:
	env.Append(CCFLAGS="-g -O2")

if int(debug)==2:
    env.Append(CCFLAGS="-g -O0 -DCODA_EXTRA_DEBUG")


env.Append(CPPPATH=".")
env.Append(CCFLAGS=['-DWITH_TERM_COLORS'])
# BLAS
if sys.platform=="darwin":
	env['FRAMEWORKS']+= ['Accelerate']
	env.Append(LINKFLAGS="-framework Accelerate")

#env.Append(LINKFLAGS=['-fopenmp'])


lib_target = "coda"
lib_source = Glob('coda/*/*.cpp')

env.SharedLibrary(lib_target, lib_source)
env.Library(lib_target, lib_source)

run = env.Program("run",['main.cpp'],LIBS=['coda'],LIBPATH=['.'])
benchmark = env.Program("benchmark",['benchmark.cpp'],LIBS=['coda','armadillo'],LIBPATH=['.'])

Default(run)
Alias("all",['run', 'benchmark'])