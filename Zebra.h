#ifndef _ZEBRA_H
#define _ZEBRA_H
#include "Animal.h"
#include <string>

using namespace std;

class Zebra : virtual public Animal
{
public:
    Zebra();                   // Default Constructor
    Zebra(string n);           // Construct Zebra with name n
    Zebra(string n, bool isf); // Instantiate zebra with given name and fed status

    void feed();
    string getSpecies();

    ~Zebra(); // Default Destructor
};

#endif // _ZEBRA_H