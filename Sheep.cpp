#include "Sheep.h"
#include <iostream>
#include <string>

using namespace std;

Sheep::Sheep()
{
    name = "";
    cage = 0;
}

Sheep::Sheep(string n)
{
    name = n;
    cage = 0;
}

Sheep::Sheep(string n, int id)
{
    name = n;
    cage = id;
}

Sheep::~Sheep() // Default Destructor
{
    // DESTROY THE SHEEP HAHAHAHA
    // not much else to say here...
}