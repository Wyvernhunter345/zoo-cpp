#ifndef _TIGER_H
#define _TIGER_H
#include "Animal.h"
#include <string>

using namespace std;

class Tiger : virtual public Animal
{
public:
    Tiger();                   // Default Constructor
    Tiger(string n);           // Instantiate tiger with given name
    Tiger(string n, bool isf); // Instantiate tiger with given name and fed status

    void feed();
    string getSpecies();

    ~Tiger(); // Default Destructor
};

#endif // _TIGER_H