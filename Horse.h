#ifndef _HORSE_H
#define _HORSE_H
#include "Animal.h"
#include <string>

using namespace std;

class Horse : virtual public Animal
{
public:
    Horse();                   // Default Constructor
    Horse(string n);           // Create Horse with given name
    Horse(string n, bool isf); // Create Horse with given name and fed status

    void feed();
    string getSpecies();

    ~Horse(); // Default Destructor
};

#endif // _HORSE_H