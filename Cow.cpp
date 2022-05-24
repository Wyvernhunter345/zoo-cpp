#include "Cow.h"
#include <iostream>
#include <string>

using namespace std;

Cow::Cow()
{
    name = "";
    fed = true;
}

Cow::Cow(string n)
{
    name = n;
    fed = true;
}

Cow::Cow(string n, bool isf)
{
    name = n;
    fed = isf;
}

void Cow::feed()
{
    std::cout << "You feed " << name << " the Cow some bundles of hay. They seem to enjoy eating it more than the grass in the field!" << '\n';
    fed = true;
};

string Cow::getSpecies()
{
    return "Cow";
}

Cow::~Cow() // Default Destructor
{
}