# env = Environment()
# Export('env')
# SConscript('SConscript', variant_dir='build', duplicate=0)

import os

env=Environment()
env.Append(CPPPATH=".")
#env.Append(CCFLAGS="-g -O2 -funroll-loops -fno-builtin")
env.Append(CCFLAGS="-g -O3 -funroll-loops")
env.Append(CCFLAGS="-DTERM_WITH_COLORS")
#env.Append(CCFLAGS="-fopenmp -DTERM_WITH_COLORS")
#env.Append(LINKFLAGS="-fopenmp");

# BLAS
env['FRAMEWORKS']+= ['Accelerate']
env.Append(CCFLAGS="-framework Accelerate");
env.Append(LINKFLAGS="-framework Accelerate");

lib_target = "coda"
lib_source = Glob('coda/*/*.cpp')
# lib_source = Split("""
# coda/utils/Timer.cpp
# coda/utils/log.cpp
# coda/parameter/Parameter.cpp
# coda/parameter/Parameters.cpp
# coda/parameter/GlobalParameters.cpp
# """)

#env.Library(lib_target, lib_source)
env.Library(lib_target, lib_source)
env.Program("run",['main.cpp'],LIBS=['coda'],LIBPATH=['.'])