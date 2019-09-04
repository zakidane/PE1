CXX = g++  # the compiler
CXXFLAGS = -std=c++11 -Wall  # flags for the compiler (use c++11 standards, turn on all optional warnings); add -ggdb if you want to use gdb to debug!

# runs for "make all"
all: main

# runs for "make target1"
# the line below this one must be TABBED in (not spaces!)
main: main.o Point.o
	$(CXX) $(CXXFLAGS) Point.o main.o -o main

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

Point.o: Point.cpp
	$(CXX) $(CXXFLAGS) -c Point.cpp

# runs for "make clean"
clean:
	rm main.o Point.o main
