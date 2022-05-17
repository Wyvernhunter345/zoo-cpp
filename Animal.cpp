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

extern Tiger Tiger1;
extern Tiger Tiger2;
extern Lion Lion1;
extern Lion Lion2;
extern Zebra Zebra1;
extern Zebra Zebra2;
extern Horse Horse1;
extern Horse Horse2;
extern Cow Cow1;
extern Cow Cow2;
extern Sheep Sheep1;
extern Sheep Sheep2;

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

void Animal::removeAnimal()
{
    // get type of animal to remove
    string response;
    cout << "What type of animal do you wish to remove?" << endl;
    cout << "L: Lion, T: Tiger, Z: Zebra, H: Horse, S: Sheep, C: Cow";
    cin >> response;

    // get animal's name
    string name;
    cout << "What is the name of the animal you want removed?";
    cin >> name;

    int cageNumber = 0; // Used to identify the cage number of the animal

    // if-elses used for strings as switch doesn't work
    if (response == "L" || response == "l")
    {
        if (name == Lion1.name)
        {
            cageNumber = Lion1.cage;
            Lion1.cage = 0;
            used_cage[cageNumber + 1] = 0; // value in cage list changed to zero, indicating cage is free
        }
        else if (name == Lion2.name)
        {
            cageNumber = Lion2.cage;
            Lion2.cage = 0;
            used_cage[cageNumber + 1] = 0;
        }
        else
        {
            cout << "Invalid Lion name! Aborting...";
        }
    }
    else if (response == "T" || response == "t")
    {
        if (name == Tiger1.name)
        {
            cageNumber = Tiger1.cage;
            Tiger1.cage = 0;
            used_cage[cageNumber + 1] = 0;
        }
        else if (name == Tiger2.name)
        {
            cageNumber = Tiger2.cage;
            Tiger2.cage = 0;
            used_cage[cageNumber + 1] = 0;
        }
        else
        {
            cout << "Invalid Tiger name! Aborting...";
        }
    }
    else if (response == "Z" || response == "z")
    {
        if (name == Zebra1.name)
        {
            cageNumber = Zebra1.cage;
            Zebra1.cage = 0;
            used_cage[cageNumber + 1] = 0;
        }
        else if (name == Zebra2.name)
        {
            cageNumber = Zebra2.cage;
            Zebra2.cage = 0;
            used_cage[cageNumber + 1] = 0;
        }
        else
        {
            cout << "Invalid Zebra name! Aborting...";
        }
    }
    else if (response == "H" || response == "h")
    {
        if (name == Horse1.name)
        {
            cageNumber = Horse1.cage;
            Horse1.cage = 0;
            used_cage[cageNumber + 1] = 0;
        }
        else if (name == Horse2.name)
        {
            cageNumber = Horse2.cage;
            Horse2.cage = 0;
            used_cage[cageNumber + 1] = 0;
        }
        else
        {
            cout << "Invalid Horse name! Aborting...";
        }
    }
    else if (response == "S")
    {
        if (name == Sheep1.name)
        {
            cageNumber = Sheep1.cage;
            Sheep1.cage = 0;
            used_cage[cageNumber + 1] = 0;
        }
        else if (name == Sheep2.name)
        {
            cageNumber = Sheep2.cage;
            Sheep2.cage = 0;
            used_cage[cageNumber + 1] = 0;
        }
        else
        {
            cout << "Invalid Sheep name! Aborting...";
        }
    }
    else if (response == "c" || response == "C")
    {
        if (name == Cow1.name)
        {
            cageNumber = Cow1.cage;
            Cow1.cage = 0;
            used_cage[cageNumber + 1] = 0;
        }
        else if (name == Cow2.name)
        {
            cageNumber = Cow2.cage;
            Cow2.cage = 0;
            used_cage[cageNumber + 1] = 0;
        }
        else
        {
            cout << "Invalid Cow name! Aborting...";
        }
    }
    else
    {
        cout << "Invalid Animal type! Aborting...";
    }

    used_cage[cageNumber + 1] = 0; // value in cage list changed to zero, indicating cage is free
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