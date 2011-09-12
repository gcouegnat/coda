CFLAGS = -O3 -funroll-loops
INC = -I.

SUFFIXES = .cpp .o
.SUFFIXES = $(SUFFIXES)

PROG=run
OBJS=main.o

default: $(PROG)

$(PROG): $(OBJS)
	@echo ${WARN_COLOR} "Linking <"$@">" ${NO_COLOR}
	g++ -o $(PROG) $(OBJS) -L. -lcoda

.cpp.o:
	@echo ${WARN_COLOR} "Compiling <"$*">" ${NO_COLOR}
	g++ ${INC} ${CFLAGS} -c $*.cpp

clean:
	@echo ${WARN_COLOR} "Cleaning" ${NO_COLOR}
	rm -f $(OBJS) $(PROG)
