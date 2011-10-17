default: test

lib:
	scons lib

test: lib
	scons test

all:
	scons all

debug:
	scons 

clean:
	scons -c all

