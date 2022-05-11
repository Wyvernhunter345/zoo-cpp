#ifndef _ANIMAL_H
#define _ANIMAL_H
#include <string>

using namespace std;

class Animal
{
private:
    string name; // Name of the animal
    string food; // Preferred food of the animal
    bool isFed;  // Determines whether the animal is fed - 1 for yes, 0 for no
    int ID;      //  Cage ID of the animal

public:
    Animal();                                     // Default Constructor
                                                  // Instantiates an animal with no name, no food, not fed, and ID 0
    Animal(string n, string f, bool isf, int id); /* Constructs an animal with the given name,
                                                   * food, fed status, and cage ID */

    void getName(); // Returns the name of the animal
    void setName(); // Changes the name of the animal

    void getFood(); // Returns the animal's preferred food
    void setFood(); // Changes the animal's preferred food

    void isFed(); // Returns true or false depending on whether the animal is fed
    void feed();  // Feed the animal, turning false into true

    ~Animal(); // Default destructor
};

#endif // _ANIMAL_H