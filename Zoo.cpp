#include "Zoo.h"
#include "Lion.h"
#include "Zebra.h"
#include "Tiger.h"
#include "Sheep.h"
#include "Horse.h"
#include "Cow.h"
#include "Animal.h"
#include <iostream>
#include <vector>
using namespace std;

extern vector<Animal *> animals;

void Zoo::addAnimal()
{
    if ((animals.size)() < 12)
    {
        cout << "ADD AN ANIMAL"
             << "\n\n";
        cout << "Enter the animal's name: ";
        string name;
        cin >> name;

        // has animal been fed?
        cout << "\nHas the animal been fed today? \n";
        cout << "(Y: Yes, N/(other): No): ";
        bool fedToday;
        string entered;
        cin >> entered;
        if (entered == "Y" || entered == "y")
        {
            fedToday = 1;
        }
        else if (entered == "N" || entered == "n")
        {
            fedToday = 0;
        }
        else
        {
            cout << "Invalid option entered, defaulting to No..." << '\n';
            fedToday = 1;
        }

        // get type of animal
        string resp;
        int respInt;
        cout << '\n'
             << "What type of animal is it?" << '\n'
             << "==================================" << '\n'
             << "||0 = Lion, 1 = Tiger, 2 = Zebra||" << '\n'
             << "||3 = Horse, 4 = Cow, 5 = Sheep ||" << '\n'
             << "==================================" << '\n'
             << "Number: ";
        cin >> resp;

        try
        {
            respInt = stoi(resp);
        }
        catch (const std::exception &e)
        {
            cout << "Input not a number! Aborting..." << '\n';
            return;
        }

        cout << '\n';
        if (respInt > 5 or respInt < 0)
        {
            cout << "Not a valid animal! Aborting...";
            return;
        }

        string index = to_string(Zoo::index);
        switch (respInt)
        {
        case 0:
            animals.push_back(new Lion(name, respInt));
            break;
        case 1:
            animals.push_back(new Tiger(name, respInt));
            break;
        case 2:
            animals.push_back(new Zebra(name, respInt));
            break;
        case 3:
            animals.push_back(new Horse(name, respInt));
            break;
        case 4:
            animals.push_back(new Cow(name, respInt));
            break;
        case 5:
            animals.push_back(new Sheep(name, respInt));
            break;
        }
    }
}

void Zoo::removeAnimal()
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

void Zoo::viewAnimals()

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
        cout << "Cage 8: (empty)"
             << "\n\n";
    }
    else
        cout << "Cage 8:" << '\n'
             << "-------" << '\n'
             << "Name: " << Cow1->name << '\n'
             << "Species: Cow"
             << "\n\n";

    if (Cow2->name == "")
    {
        cout << "Cage 9: (empty)"
             << "\n\n";
    }
    else
        cout << "Cage 9:" << '\n'
             << "-------" << '\n'
             << "Name: " << Cow2->name << '\n'
             << "Species: Cow"
             << "\n\n";

    if (Sheep1->name == "")
    {
        cout << "Cage 9: (empty)"
             << "\n\n";
    }
    else
        cout << "Cage 9:" << '\n'
             << "-------" << '\n'
             << "Name: " << Sheep1->name << '\n'
             << "Species: Sheep"
             << "\n\n";

    if (Sheep2->name == "")
    {
        cout << "Cage 10: (empty)"
             << "\n\n";
    }
    else
        cout << "Cage 10:" << '\n'
             << "-------" << '\n'
             << "Name: " << Sheep2->name << '\n'
             << "Species: Sheep"
             << "\n\n";
}
