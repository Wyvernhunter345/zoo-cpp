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

void Animal::addAnimal()
{
    // Find the position
    int cage_number = 11;
    for (int i = 0; i < 9; i++)
    {
        if (used_cage[i] == 0)
        {
            cage_number = i + 1;
            break;
        }
    }

    // if all enclosures full
    if (cage_number > 10 or cage_number < 1)
    {
        cout << "There are no empty enclosures to add an animal to" << '\n';
        // program returns something to quit
    }

    // get animal's name
    cout << "ADD AN ANIMAL"
         << "\n\n";
    cout << "Enter the animal's name: ";
    string name;
    cin >> name;

    // has animal been fed?
    cout << "\nHas the animal been fed today? \n";
    cout << "(Y: Yes, Other: No): ";
    bool fedToday;
    string entered;
    cin >> entered;
    if (entered == "Y")
    {
        fedToday = 1;
    }
    else if (entered == "N")
    {
        fedToday = 0;
    }
    else
    {
        cout << "Invalid option entered, defaulting to Yes..." << '\n';
        fedToday = 1;
    }

    // get type of animal
    int resp;
    cout << '\n'
         << "What type of animal is it?" << '\n'
         << "==================================" << '\n'
         << "||0 = Lion, 1 = Tiger, 2 = Zebra||" << '\n'
         << "||3 = Horse, 4 = Cow, 5 = Sheep ||" << '\n'
         << "==================================" << '\n'
         << "Number: ";
    cin >> resp;
    cout << '\n';
    if (resp > 5 or resp < 0)
    {
        cout << "That is not a valid animal";
        // program return something to quit
    }

    /* passes bug test at this point
     */

    // add animal to zoo

    switch (resp)
    {

    case 0:
        if (in_zoo[0] == 0)
        {
            Lion1->setCage(1);
            Lion1->setName(name);
            if (fedToday)
                Lion1->feedSilently();
            else
                Lion1->fed = false;
            cout << "Lion successfully added with cage number " << 1 << "!" << '\n';
            in_zoo[0] = 1;
        }

        else if (in_zoo[1] == 0)
        {
            Lion2->setCage(2);
            Lion2->setName(name);
            if (fedToday)
                Lion2->feedSilently();
            else
                Lion2->fed = false;
            cout << "Lion successfully added with cage number " << 2 << "!" << '\n';
            in_zoo[1] = 1;
        }

        else
        {
            cout << "Sorry, the zoo already has the maximum number of lions";
        }
        break;
    case 1:
        if (in_zoo[2] == 0)
        {
            Tiger1->setCage(3);
            Tiger1->setName(name);
            if (fedToday)
                Tiger1->feedSilently();
            else
                Tiger1->fed = false;
            cout << "Tiger successfully added with cage number " << 3 << "!" << '\n';
            in_zoo[2] = 1;
        }

        else if (in_zoo[3] == 0)
        {
            Tiger2->setCage(4);
            Tiger2->setName(name);
            if (fedToday)
                Tiger2->feedSilently();
            else
                Tiger2->fed = false;
            cout << "Tiger successfully added with cage number " << 4 << "!" << '\n';
            in_zoo[3] = 1;
        }

        else
        {
            cout << "Sorry, the zoo already has the maximum number of tigers";
        }
        break;

    case 2:
        if (in_zoo[4] == 0)
        {
            Zebra1->setCage(5);
            Zebra1->setName(name);
            if (fedToday)
                Zebra1->feedSilently();
            else
                Zebra1->fed = false;
            cout << "Zebra successfully added with cage number " << 5 << "!" << '\n';
            in_zoo[4] = 1;
        }

        else if (in_zoo[5] == 0)
        {
            Zebra2->setCage(6);
            Zebra2->setName(name);
            if (fedToday)
                Zebra2->feedSilently();
            else
                Zebra2->fed = false;
            cout << "Zebra successfully added with cage number " << 6 << "!" << '\n';
            in_zoo[5] = 1;
        }

        else
        {
            cout << "Sorry, the zoo already has the maximum number of zebras";
        }
        break;

    case 3:
        if (in_zoo[6] == 0)
        {
            Horse1->setCage(7);
            Horse1->setName(name);
            if (fedToday)
                Horse1->feedSilently();
            else
                Horse1->fed = false;
            cout << "Horse successfully added with cage number " << 7 << "!" << '\n';
            in_zoo[6] = 1;
        }

        else if (in_zoo[7] == 0)
        {
            Horse2->setCage(8);
            Horse2->setName(name);
            if (fedToday)
                Horse2->feedSilently();
            else
                Horse2->fed = false;
            cout << "Horse successfully added with cage number " << 8 << "!" << '\n';
            in_zoo[7] = 1;
        }

        else
        {
            cout << "Sorry, the zoo already has the maximum number of horses";
        }
        break;

    case 4:
        if (in_zoo[8] == 0)
        {
            Cow1->setCage(9);
            Cow1->setName(name);
            if (fedToday)
                Cow1->feedSilently();
            else
                Cow1->fed = false;
            cout << "Cow successfully added with cage number " << 9 << "!" << '\n';
            in_zoo[8] = 1;
        }

        else if (in_zoo[9] == 0)
        {
            Cow2->setCage(10);
            Cow2->setName(name);
            if (fedToday)
                Cow2->feedSilently();
            else
                Cow2->fed = false;
            cout << "Cow successfully added with cage number " << 10 << "!" << '\n';
            in_zoo[9] = 1;
        }

        else
        {
            cout << "Sorry, the zoo already has the maximum number of cows";
        }
        break;

    default:
        cout << "Not a valid animal! Aborting...\n\n"
             << '\n';
        break;
    }
}

void Animal::removeAnimal()
{
    // get type of animal to remove
    int resp;
    cout << "REMOVE AN ANIMAL"
         << "\n\n"
         << "What type of animal is it?" << '\n'
         << "==================================" << '\n'
         << "||0 = Lion, 1 = Tiger, 2 = Zebra||" << '\n'
         << "||3 = Horse, 4 = Cow, 5 = Sheep ||" << '\n'
         << "==================================" << '\n'
         << "Number: ";
    cin >> resp;

    // get animal's name
    string name;
    cout << "What is the name of the animal you want removed?";
    cin >> name;

    int cageNumber = 0; // Used to identify the cage number of the animal

    switch (resp)
    {
    case 0:
        if (name == Lion1->name)
        {
            cageNumber = Lion1->cage;
            Lion1->cage = 0;
            used_cage[cageNumber + 1] = 0; // value in cage list changed to zero, indicating cage is free
        }
        else if (name == Lion2->name)
        {
            cageNumber = Lion2->cage;
            Lion2->cage = 0;
            used_cage[cageNumber + 1] = 0;
        }
        else
        {
            cout << "Invalid Lion name! Aborting...\n\n";
        }
        break;

    case 1:
    {
        if (name == Tiger1->name)
        {
            cageNumber = Tiger1->cage;
            Tiger1->cage = 0;
            used_cage[cageNumber + 1] = 0;
        }
        else if (name == Tiger2->name)
        {
            cageNumber = Tiger2->cage;
            Tiger2->cage = 0;
            used_cage[cageNumber + 1] = 0;
        }
        else
        {
            cout << "Invalid Tiger name! Aborting...\n\n";
        }
        break;
    }
    case 2:
    {
        if (name == Zebra1->name)
        {
            cageNumber = Zebra1->cage;
            Zebra1->cage = 0;
            used_cage[cageNumber + 1] = 0;
        }
        else if (name == Zebra2->name)
        {
            cageNumber = Zebra2->cage;
            Zebra2->cage = 0;
            used_cage[cageNumber + 1] = 0;
        }
        else
        {
            cout << "Invalid Zebra name! Aborting...\n\n";
        }
        break;
    }
    case 3:
    {
        if (name == Horse1->name)
        {
            cageNumber = Horse1->cage;
            Horse1->cage = 0;
            used_cage[cageNumber + 1] = 0;
        }
        else if (name == Horse2->name)
        {
            cageNumber = Horse2->cage;
            Horse2->cage = 0;
            used_cage[cageNumber + 1] = 0;
        }
        else
        {
            cout << "Invalid Horse name! Aborting...\n\n";
        }
        break;
    }
    case 5:
    {
        if (name == Sheep1->name)
        {
            cageNumber = Sheep1->cage;
            Sheep1->cage = 0;
            used_cage[cageNumber + 1] = 0;
        }
        else if (name == Sheep2->name)
        {
            cageNumber = Sheep2->cage;
            Sheep2->cage = 0;
            used_cage[cageNumber + 1] = 0;
        }
        else
        {
            cout << "Invalid Sheep name! Aborting...\n\n";
        }
        break;
    }
    case 4:
    {
        if (name == Cow1->name)
        {
            cageNumber = Cow1->cage;
            Cow1->cage = 0;
            used_cage[cageNumber + 1] = 0;
        }
        else if (name == Cow2->name)
        {
            cageNumber = Cow2->cage;
            Cow2->cage = 0;
            used_cage[cageNumber + 1] = 0;
        }
        else
        {
            cout << "Invalid Cow name! Aborting...\n\n";
        }
        break;
    }
    default:
    {
        cout << "Invalid Animal type! Aborting...\n\n";
        break;
    }
    }
}

void Animal::viewAnimals()
{
    if (Lion1->name == "")
    {
        cout << "Cage 1: (empty)"
             << "\n\n";
    }
    else
        cout << "Cage 1:" << '\n'
             << "-------" << '\n'
             << "Name: " << Lion1->name << '\n'
             << "Species: Lion"
             << "\n\n";

    if (Lion2->name == "")
    {
        cout << "Cage 2: (empty)"
             << "\n\n";
    }
    else
        cout << "Cage 2:" << '\n'
             << "-------" << '\n'
             << "Name: " << Lion2->name << '\n'
             << "Species: Lion"
             << "\n\n";

    if (Tiger1->name == "")
    {
        cout << "Cage 3: (empty)"
             << "\n\n";
    }
    else
        cout << "Cage 3:" << '\n'
             << "-------" << '\n'
             << "Name: " << Tiger1->name << '\n'
             << "Species: Tiger"
             << "\n\n";

    if (Tiger2->name == "")
    {
        cout << "Cage 4: (empty)"
             << "\n\n";
    }
    else
        cout << "Cage 4:" << '\n'
             << "-------" << '\n'
             << "Name: " << Tiger2->name << '\n'
             << "Species: Tiger"
             << "\n\n";

    if (Zebra1->name == "")
    {
        cout << "Cage 5: (empty)"
             << "\n\n";
    }
    else
        cout << "Cage 5:" << '\n'
             << "-------" << '\n'
             << "Name: " << Zebra1->name << '\n'
             << "Species: Zebra"
             << "\n\n";

    if (Zebra2->name == "")
    {
        cout << "Cage 6: (empty)"
             << "\n\n";
    }
    else
        cout << "Cage 6:" << '\n'
             << "-------" << '\n'
             << "Name: " << Zebra2->name << '\n'
             << "Species: Zebra"
             << "\n\n";

    if (Horse1->name == "")
    {
        cout << "Cage 7: (empty)"
             << "\n\n";
    }
    else
        cout << "Cage 7:" << '\n'
             << "-------" << '\n'
             << "Name: " << Horse1->name << '\n'
             << "Species: Horse"
             << "\n\n";

    if (Horse2->name == "")
    {
        cout << "Cage 8: (empty)"
             << "\n\n";
    }
    else
        cout << "Cage 8:" << '\n'
             << "-------" << '\n'
             << "Name: " << Horse2->name << '\n'
             << "Species: Horse"
             << "\n\n";

    if (Cow1->name == "")
    {
        cout << "Cage 9: (empty)"
             << "\n\n";
    }
    else
        cout << "Cage 9:" << '\n'
             << "-------" << '\n'
             << "Name: " << Cow1->name << '\n'
             << "Species: Cow"
             << "\n\n";

    if (Cow2->name == "")
    {
        cout << "Cage 10: (empty)"
             << "\n\n";
    }
    else
        cout << "Cage 10:" << '\n'
             << "-------" << '\n'
             << "Name: " << Cow2->name << '\n'
             << "Species: Cow"
             << "\n\n";

    if (Sheep1->name == "")
    {
        cout << "Cage 11: (empty)"
             << "\n\n";
    }
    else
        cout << "Cage 11" << '\n'
             << "-------" << '\n'
             << "Name: " << Sheep1->name << '\n'
             << "Species: Sheep"
             << "\n\n";

    if (Sheep2->name == "")
    {
        cout << "Cage 12: (empty)"
             << "\n\n";
    }
    else
        cout << "Cage 12:" << '\n'
             << "-------" << '\n'
             << "Name: " << Sheep2->name << '\n'
             << "Species: Sheep"
             << "\n\n";
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