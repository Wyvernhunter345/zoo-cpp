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
    Animal(string n, string f, bool isf, int id); /* Constructs an animal with the given name,
                                                   * food, fed status, and cage ID */

    void getName(); // Returns the name of the animal
    void setName(); // Changes the name of the animal

    ~Animal();
};

#endif // _ANIMAL_H