#ifndef _SHEEP_H
#define _SHEEP_H
#include "Animal.h"
#include <string>
#include <iostream>

class Sheep : public virtual Animal
{
public:
    Sheep();                   // Instantiate Sheep with no name
    Sheep(string n);           // Instantiate Sheep with given name
    Sheep(string n, bool isf); // Instantiate Sheep with given name and fed status

    void feed();
    string getSpecies();

    ~Sheep(); // Default Destructor
};

#endif // _SHEEP_H