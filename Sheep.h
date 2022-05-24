#ifndef _SHEEP_H
#define _SHEEP_H
#include "Animal.h"
#include <string>
#include <iostream>

class Sheep : public virtual Animal
{
public:
    Sheep();                      // Instantiate Sheep with no name and ID 0
    Sheep(std::string n);         // ID Defaults to 0
    Sheep(std::string n, int id); // Instantiate sheep with given name and ID

    void feed();
    string getSpecies();

    ~Sheep(); // Default Destructor
};

#endif // _SHEEP_H