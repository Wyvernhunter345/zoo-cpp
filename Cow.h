#ifndef _COW_H
#define _COW_H
#include "Animal.h"
#include <string>

using namespace std;

class Cow : virtual public Animal
{
public:
    Cow();                 // Default Constructor
    Cow(string n);         // ID Defaults to 0
    Cow(string n, int id); // Instantiate cow with given name and ID

    void feed();

    ~Cow(); // Default Destructor
};

#endif // _COW_H