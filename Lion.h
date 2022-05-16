#ifndef _LION_H
#define _LION_H
#include "Animal.h"
#include <string>

using namespace std;

class Lion : public Animal
{
public:
    Lion();                 // Default Constructor
    Lion(string n);         // ID Defaults to 0
    Lion(string n, int id); // Instantiate lion with given name and ID

    ~Lion(); // Default Destructor
};

#endif // _LION_H