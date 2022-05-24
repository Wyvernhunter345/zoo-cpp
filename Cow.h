#ifndef _COW_H
#define _COW_H
#include "Animal.h"
#include <string>

using namespace std;

class Cow : virtual public Animal
{
public:
    Cow();                   // Default Constructor
    Cow(string n);           // Create Cow with given name
    Cow(string n, bool isf); // Create Cow with given name and fed status

    void feed();
    string getSpecies();

    ~Cow(); // Default Destructor
};

#endif // _COW_H