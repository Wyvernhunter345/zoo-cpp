#ifndef _TIGER_H
#define _TIGER_H
#include "Animal.h"
#include <string>

using namespace std;

class Tiger : virtual public Animal
{
public:
    Tiger();                 // Default Constructor
    Tiger(string n);         // ID Defaults to 0
    Tiger(string n, int id); // Instantiate tiger with given name and ID

    ~Tiger(); // Default Destructor
};

#endif // _TIGER_H