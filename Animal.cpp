#include "Animal.h"
#include "Cow.h"
#include "Horse.h"
#include "Sheep.h"
#include "Tiger.h"
#include "Zebra.h"
#include "Zoo.h"
#include "Lion.h"
#include <iostream>
#include <string>

using namespace std;

extern bool used_cage[10];
extern int in_zoo[12];

extern Lion *Lion1;
extern Lion *Lion2;
extern Tiger *Tiger1;
extern Tiger *Tiger2;
extern Zebra *Zebra1;
extern Zebra *Zebra2;
extern Horse *Horse1;
extern Horse *Horse2;
extern Cow *Cow1;
extern Cow *Cow2;
extern Sheep *Sheep1;
extern Sheep *Sheep2;

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
