#include "Sheep.h"
#include <iostream>
#include <string>

using namespace std;

Sheep::Sheep()
{
    name = "";
    fed = true;
}

Sheep::Sheep(string n)
{
    name = n;
    fed = true;
}

Sheep::Sheep(string n, bool isf)
{
    name = n;
    fed = isf;
}

void Sheep::feed()
{
    std::cout << "You feed " << name << " the Sheep some bundles of hay and grass. They munch on it happily!" << '\n';
    fed = true;
};

string Sheep::getSpecies()
{
    return "Sheep";
}

Sheep::~Sheep() // Default Destructor
{
    // DESTROY THE SHEEP HAHAHAHA
    // not much else to say here...
}