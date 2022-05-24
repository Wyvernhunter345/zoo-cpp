#ifndef _LION_H
#define _LION_H
#include "Animal.h"
#include <string>

using namespace std;

class Lion : virtual public Animal
{
public:
    Lion();                   // Default Constructor
    Lion(string n);           // Create Lion with given name
    Lion(string n, bool isf); // Create Lion with given name and fed status

    void feed();
    string getSpecies();

    ~Lion(); // Default Constructor
};

#endif // _LION_H