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

Zoo::Zoo() : index(0) {}

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
         << "What is the ID of the animal you want removed?"
         << "\n"
         << "ID: ";
    cin >> resp;

    int cageNumber = 0; // Used to identify the cage number of the animal
}

Zoo::~Zoo() {}
