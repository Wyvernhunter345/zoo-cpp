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

Zoo::Zoo() {}

void Zoo::addAnimal()
{
    // Only execute the following code if the zoo is not full
    if ((animals.size)() < 12)
    {
        // Get the name of the animal
        cout << "-------------" << '\n'
             << "ADD AN ANIMAL" << '\n'
             << "-------------"
             << "\n\n";

        string name;
        cout << "Enter the animal's name: ";
        cin >> name;

        // Get fed status
        bool fedToday;
        string entered;

        cout << "\nHas the animal been fed today? \n";
        cout << "(Y/N): ";
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
            cout << "\nInvalid option entered, defaulting to No..." << '\n';
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
        cout << '\n';

        // Try and convert response to an int. If it fails, abort the command
        try
        {
            respInt = stoi(resp); // stoi(): String to Int
        }
        catch (const invalid_argument e) // std::invalid_argument
        {
            cout << "Input not a number! Aborting..."
                 << "\n\n";
            return;
        }
        if (respInt > 5 or respInt < 0)
        {
            cout << "Not a valid animal number! Aborting..."
                 << "\n\n";
            return;
        }

        /* Create a different animal object depending on the response the user gives.

           What these push_back functions do is they instantiate a nameless object
           to the end of the vector with the given name and fed status. Hence, there
           is no need to assign an individual name to each object, as:
           a) It's not possible, and
           b) You can still directly access the object and its function through
           the vector. */

        switch (respInt)
        {
        case 0:
            animals.push_back(new Lion(name, fedToday));
            cout << "Added a new Lion with name " << name << " and Cage ID " << animals.size() << "."
                 << "\n\n";
            break;
        case 1:
            animals.push_back(new Tiger(name, fedToday));
            cout << "Added a new Tiger with name " << name << " and Cage ID " << animals.size() << "."
                 << "\n\n";
            break;
        case 2:
            animals.push_back(new Zebra(name, fedToday));
            cout << "Added a new Zebra with name " << name << " and Cage ID " << animals.size() << "."
                 << "\n\n";
            break;
        case 3:
            animals.push_back(new Horse(name, fedToday));
            cout << "Added a new Horse with name " << name << " and Cage ID " << animals.size() << "."
                 << "\n\n";
            break;
        case 4:
            animals.push_back(new Cow(name, fedToday));
            cout << "Added a new Cow with name " << name << " and Cage ID " << animals.size() << "."
                 << "\n\n";
            break;
        case 5:
            animals.push_back(new Sheep(name, fedToday));
            cout << "Added a new Sheep with name " << name << " and Cage ID " << animals.size() << "."
                 << "\n\n";
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
    cout << "----------------" << '\n'
         << "REMOVE AN ANIMAL" << '\n'
         << "----------------"
         << "\n\n"
         << "What is the Cage ID of the animal you want removed?"
         << "\n"
         << "Cage: ";
    cin >> resp;
    cout << "\n";
    // Try and convert response to an int. If it fails, abort the command
    try
    {
        respInt = stoi(resp);
    }
    catch (const invalid_argument e) // std::invalid_argument
    {

        cout << "Response is not a number! Aborting...\n\n";
        return;
    }

    // Check if there is an animal in that cage
    if (respInt > (animals.size)() || respInt < 1)
    {
        cout << "Animal does not exist! Aborting... \n\n";
        return;
    }

    // If all checks have passed, begin the removal procedure
    string removal;

    cout << "ANIMAL SELECTED FOR REMOVAL" << '\n'
         << "---------------------------" << '\n'
         << "Name: " << animals[respInt - 1]->getName() << '\n'
         << "Species: " << animals[respInt - 1]->getSpecies() << '\n'
         << "Cage ID: " << respInt << "\n\n"
         << "Are you sure you want to remove this animal? (Y/N): ";
    cin >> removal;

    if (removal == "Y" || removal == "y")
    {
        animals.erase(animals.begin() + respInt - 1); // Delete the animal object at the chosen index
        animals.shrink_to_fit();                      // Free memory by compacting the array to only the size it needs
        cout << "\n"
             << "Animal removed from zoo. Bye-bye!"
             << "\n\n";
    }
    else if (removal == "N" || removal == "n")
    {
        cout << "\n"
             << "Operation Cancelled."
             << "\n\n";
    }
    else
    {
        cout << "\n"
             << "Invalid response! Aborting... "
             << "\n\n";
    }
}

void Zoo::viewAnimals()
{
    if (animals.size() > 0)
    {
        for (int i = 0; i < animals.size(); i++)
        {
            if (animals[i]->isFed() == false)
                cout << "Cage " << i + 1 << "\n"
                     << "------"
                     << "\n"
                     << "Name: " << animals[i]->getName() << "\nSpecies: " << animals[i]->getSpecies() << "\nHunger: Hungry\n\n";
            else
                cout << "Cage " << i + 1 << "\n"
                     << "------"
                     << "\n"
                     << "Name: " << animals[i]->getName() << "\nSpecies: " << animals[i]->getSpecies() << "\nHunger: Full\n\n";
        }
        cout << "\nCapacity: (" << animals.size() << "/12)"
             << "\n\n";
    }
    else
        cout << "There are no animals in the zoo! (Yet...)"
             << "\n\n";
}

void Zoo::viewHungry()
{
    for (int i = 0; i < animals.size(); i++)
    {
        if (animals[i]->isFed() == 0)
        {
            cout << "Cage " << i + 1 << "\n"
                 << "------"
                 << "\n"
                 << "Name: " << animals[i]->getName() << "\nSpecies: " << animals[i]->getSpecies() << "\n\n";
        }
    }
}
void Zoo::feedAnimal()
{
    string resp;
    int respInt;
    cout << "--------------" << '\n'
         << "FEED AN ANIMAL" << '\n'
         << "--------------"
         << "\n\n"
         << "Enter the Cage ID of the animal you wish to feed: ";

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
    if (respInt > (animals.size)() || respInt < 1)
    {
        cout << "\n\nAnimal does not exist! Aborting... \n\n";
        return;
    }
    cout << "\n\n";
    animals[respInt - 1]->feed(); // Call feed function from within the array
    cout << "\n\n";
}

Zoo::~Zoo()
{
}
