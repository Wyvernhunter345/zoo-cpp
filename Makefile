#
#	MAKEFILE
#

# Build all necessary files once preparation is complete
all: build/Animal.o build/Zoo.o build/main.o build/Zebra.o build/Cow.o build/Horse.o build/Tiger.o build/Sheep.o
	clang++ -o build/main.out build/Animal.o build/Zoo.o build/main.o build/Zebra.o build/Cow.o build/Horse.o build/Tiger.o build/Sheep.o

# Compile machine code for main.cpp if necessary
build/main.o: main.cpp
	g++ -c -o build/main.o main.cpp

# Compile machine code for Animal.cpp if necessary
build/Animal.o: Animal.cpp
	g++ -c -o build/Animal.o Animal.cpp

# Compile machine code for Zoo.cpp if necessary
build/Zoo.o: Zoo.cpp
	g++ -c -o build/Zoo.o Zoo.cpp

build/Cow.o: Cow.cpp
	g++ -c -o build/Cow.o Cow.cpp

build/Zebra.o: Zebra.cpp
	g++ -c -o build/Zebra.o Zebra.cpp

build/Horse.o: Horse.cpp
	g++ -c -o build/Horse.o Horse.cpp

build/Lion.o: Lion.cpp
	g++ -c -o build/Lion.o Lion.cpp

build/Sheep.o: Sheep.cpp
	g++ -c -o build/Sheep.o Sheep.cpp

build/Tiger.o: Tiger.cpp
	g++ -c -o build/Tiger.o Tiger.cpp