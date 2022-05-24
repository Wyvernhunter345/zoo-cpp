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