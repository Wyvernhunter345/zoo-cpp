#ifndef _ANIMAL_H
#define _ANIMAL_H
#include <string>

using namespace std;

// Base class for all animals in the zoo.

class Animal
{
protected:
    string name; // Name of the animal
    bool fed;    // Determines whether the animal is fed - 1 for yes, 0 for no

public:
    Animal(); // Default Constructor

    int getCage();       // Returns the cage ID of the animal
    void setCage(int c); // Move/Set the cage of the animal

    string getName();       // Returns the name of the animal
    void setName(string n); // Changes the name of the animal

    string getFood();       // Returns the animal's preferred food
    void setFood(string f); // Changes the animal's preferred food

    bool isFed();            // Returns true or false depending on whether the animal is fed
    virtual void feed() = 0; // Feed the animal with a text output, turning false into true
    void feedSilently();     // Feed the animal silently, for setup purposes
    void unfeed();           // Change "fed" from true to false

    virtual string getSpecies() = 0; // Returns the species of the animal

    ~Animal(); // Default destructor
};

#endif // _ANIMAL_H
