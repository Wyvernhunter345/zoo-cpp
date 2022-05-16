#include "Animal.h"
#include <iostream>
#include <string>

using namespace std;

/*
 * Implementation of Animal.h
 */

Animal::Animal() : name(""), food(""), cage(0), fed(false) {} // Default constructor

Animal::Animal(string n, string f, bool isf, int id) : name(n), food(f), cage(id), fed(isf) {}

void Animal::setCage(int c)
{
    cage = c;
}
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

void Animal::feedSilently()
{
    fed = true;
}
/* void Animal::feed()
{
    cout << "Animal has been fed";
} */
void Animal::unfeed()
{
    fed = false;
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