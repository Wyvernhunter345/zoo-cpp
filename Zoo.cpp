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
    // Only execute the following code if the zoo is not full
    if ((animals.size)() < 12)
    {
        // Get the name of the animal
        cout << "ADD AN ANIMAL"
             << "\n\n";
        cout << "Enter the animal's name: ";
        string name;
        cin >> name;

        // Get fed status
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

        // Get type of animal
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

        // Try and convert response to an int. If it fails, abort the command
        try
        {
            respInt = stoi(resp); // stoi(): String to Int
        }
        catch (const invalid_argument e) // std::invalid_argument
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

        // Create a different animal object depending on the response the user gives
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
    else
    {
        cout << "The zoo is full, you can't add any more animals!"
             << "\n"
             << "Try removing an animal first."
             << "\n\n";
    }
}

void Zoo::removeAnimal()
{
    // Get the ID of the animal to remove
    string resp;
    int respInt;
    cout << "REMOVE AN ANIMAL"
         << "\n\n"
         << "What is the Cage ID of the animal you want removed?"
         << "\n"
         << "Cage: ";
    cin >> resp;

    // Try and convert response to an int. If it fails, abort the command
    try
    {
        respInt = stoi(resp);
    }
    catch (const invalid_argument e) // std::invalid_argument
    {

        cout << "\n\nResponse is not a number! Aborting...\n\n";
        return;
    }

    // Check if there is an animal in that cage
    if (respInt < (animals.size)())
    {
        cout << "Animal does not exist! Aborting... \n\n";
        return;
    }

    // If all checks have passed, begin the removal procedure
    string removal;
    cout << "\n\n";
    cout << "ANIMAL SELECTED FOR REMOVAL" << '\n'
         << "---------------------------"
         << "Name: " << animals[respInt]->getName() << '\n'
         << "Species: " << animals[respInt]->getSpecies() << '\n'
         << "Cage ID: " << respInt << "\n\n"
         << "Are you sure you want to remove this animal? (Y/N): ";
    cin >> removal;

    if (removal == "Y" || removal == "y")
    {
        delete animals[respInt];
        animals.erase(animals.begin() + respInt);
        animals.shrink_to_fit();
    }
}

Zoo::~Zoo() {}
