#include "Horse.h"
#include <iostream>
#include <string>

using namespace std;

Horse::Horse()
{
    name = "";
    cage = 0;
}

Horse::Horse(string n)
{
    name = n;
    cage = 0;
}

Horse::Horse(string n, int id)
{
    name = n;
    cage = id;
}

void Horse::feed()
{
    std::cout << "You feed " << name << " the Horse some bundles of hay and grass. They eat it up quickly, though you now have spit on you..." << '\n';
    fed = true;
};

string Horse::getSpecies()
{
    return "Horse";
}

Horse::~Horse() // Default Destructor
{
}