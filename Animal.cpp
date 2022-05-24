#include "Animal.h"
#include <iostream>
#include <string>

using namespace std;

/*
 * Implementation of Animal.h
 */

Animal::Animal() : name(""), fed(false) {} // Default constructor

void Animal::setCage(int c)
{
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
    return "";
}

void Animal::setFood(string f)
{
}

bool Animal::isFed()
{
    return fed;
}

void Animal::feedSilently()
{
    fed = true;
}

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
