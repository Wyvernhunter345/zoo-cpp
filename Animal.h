#ifndef _ANIMAL_H
#define _ANIMAL_H
#include <string>

using namespace std;

// Base class for all animals in the zoo.

class Animal
{
protected:
    string name; // Name of the animal
    string food; // Preferred food of the animal
    bool fed;    // Determines whether the animal is fed - 1 for yes, 0 for no
    int cage;    //  Cage ID of the animal

public:
    Animal();                                     // Default Constructor
                                                  // Instantiates an animal with no name, no food, not fed, and ID 0
    Animal(string n, string f, bool isf, int id); /* Constructs an animal with the given name,
                                                   * food, fed status, and cage ID */

    int getCage();       // Returns the cage ID of the animal
    void setCage(int c); // Move/Set the cage of the animal

    string getName();       // Returns the name of the animal
    void setName(string n); // Changes the name of the animal

    string getFood();       // Returns the animal's preferred food
    void setFood(string f); // Changes the animal's preferred food

    bool isFed(); // Returns true or false depending on whether the animal is fed
    // virtual void feed();
    //   Feed the animal with a text output, turning false into true
    void feedSilently(); // Feed the animal without returning any text. Used for setup purposes
    void unfeed();       // Sets 'fed' to false

    ~Animal(); // Default destructor
};

#endif // _ANIMAL_H