#include "Sheep.h"
#include <iostream>
#include <string>

using namespace std;

Sheep::Sheep()
{
    Sheep::name = "";
    Sheep::cage = 0;
}

Sheep::Sheep(string n)
{
    Sheep::name = n;
    Sheep::cage = 0;
}

Sheep::Sheep(string n, int id)
{
    Sheep::name = n;
    Sheep::cage = id;
}

Sheep::~Sheep() // Default Destructor
{
    // DESTROY THE SHEEP HAHAHAHA
    // not much else to say here...
}