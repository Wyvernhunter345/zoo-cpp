#ifndef _HORSE_H
#define _HORSE_H
#include "Animal.h"
#include <string>

using namespace std;

class Horse : virtual public Animal
{
public:
    Horse();                 // Default Constructor
    Horse(string n);         // ID Defaults to 0
    Horse(string n, int id); // Instantiate horse with given name and ID

    ~Horse(); // Default Destructor
};

#endif // _HORSE_H