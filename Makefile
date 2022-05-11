all: build/Animal.o Animal.h Zoo.h build/Zoo.o build/main.o
	clang++ -o build/main.out build/Animal.o build/Zoo.o build/main.o

main.o: main.cpp
	g++ -c -o build/main.o main.cpp

Animal.o: Animal.cpp
	g++ -c -o build/Animal.o Animal.cpp

Zoo.o: Zoo.cpp
	g++ -c -o build/Zoo.o Zoo.cpp