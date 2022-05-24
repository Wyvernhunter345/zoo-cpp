#ifndef _ZEBRA_H
#define _ZEBRA_H
#include "Animal.h"
#include <string>

using namespace std;

class Zebra : virtual public Animal
{
public:
    Zebra();                 // Default Constructor
    Zebra(string n);         // ID Defaults to 0
    Zebra(string n, int id); // Instantiate zebra with given name and ID

    void feed();

    ~Zebra(); // Default Destructor
};

#endif // _ZEBRA_H