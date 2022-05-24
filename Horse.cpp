#include "Horse.h"
#include <iostream>
#include <string>

using namespace std;

Horse::Horse()
{
    name = "";
    fed = true;
}

Horse::Horse(string n)
{
    name = n;
    fed = true;
}

Horse::Horse(string n, bool isf)
{
    name = n;
    fed = isf;
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