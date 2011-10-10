default: all

all:
	scons all

debug:
	scons debug=1

clean:
	scons -c all

