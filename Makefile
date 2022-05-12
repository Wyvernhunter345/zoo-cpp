#
#	MAKEFILE
#

# Build all necessary files once preparation is complete
all: build/Animal.o Animal.h Zoo.h build/Zoo.o build/main.o
	clang++ -o build/main.out build/Animal.o build/Zoo.o build/main.o

# Compile machine code for main.cpp if necessary
main.o: main.cpp
	g++ -c -o build/main.o main.cpp

# Compile machine code for Animal.cpp if necessary
Animal.o: Animal.cpp
	g++ -c -o build/Animal.o Animal.cpp

# Compile machine code for Zoo.cpp if necessary
Zoo.o: Zoo.cpp
	g++ -c -o build/Zoo.o Zoo.cpp