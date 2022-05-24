#ifndef _LION_H
#define _LION_H
#include "Animal.h"
#include <string>

using namespace std;

class Lion : virtual public Animal
{
public:
    Lion();                 // Default Constructor
    Lion(string n);         // ID Defaults to 0
    Lion(string n, int id); // Instantiate Lion with given name and ID

    void feed();
    
    ~Lion(); // Default Constructor
};

#endif // _LION_H