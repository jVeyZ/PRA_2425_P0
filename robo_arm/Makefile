.SUFFIXES: .cpp .h .o
.cpp.o: ; g++ -c $*.cpp

all: main

rarm.o: rarm.cpp rarm.h

main.o: main.cpp rarm.h

main: main.o rarm.o
	g++ -o main rarm.o main.o

clean:
	rm -f *.o main

test: all
	./main
