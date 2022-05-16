#ifndef _SHEEP_H
#define _SHEEP_H
#include "Animal.h"
#include <string>

using namespace std;

class Sheep : virtual public Animal
{
public:
    Sheep();                 // Instantiate Sheep with no name and ID 0
    Sheep(string n);         // ID Defaults to 0
    Sheep(string n, int id); // Instantiate sheep with given name and ID

    ~Sheep(); // Default Destructor
};

#endif // _SHEEP_H