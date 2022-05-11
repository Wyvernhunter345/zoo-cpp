#include "Animal.h"
#include <iostream>
#include <string>

using namespace std;

/*
 * Implementation of Animal.h
 */

Animal::Animal() : name(""), food(""), ID(0), fed(false) {} // Default constructor

Animal::Animal(string n, string f, bool isf, int id) : name(n), food(f), ID(id), fed(isf) {}

string Animal::getName()
{
    return name;
}

void Animal::setName(string n)
{
    name = n;
}

string Animal::getFood()
{
    return food;
}

void Animal::setFood(string f)
{
    food = f;
}

bool Animal::isFed()
{
    return fed;
}

void Animal::feed()
{
    fed = true;
}

Animal::~Animal() // Default destructor
{
}

/*
 ________________
< why am I here? >
 ----------------
        \   ^__^
         \  (oo)\_______
            (__)\       )\/\
                ||----w |
                ||     ||
*/