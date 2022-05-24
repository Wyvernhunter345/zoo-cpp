#include "Cow.h"
#include <iostream>
#include <string>

using namespace std;

Cow::Cow()
{
    name = "";
    cage = 0;
}

Cow::Cow(string n)
{
    name = n;
    cage = 0;
}

Cow::Cow(string n, int id)
{
    name = n;
    cage = id;
}

void Cow::feed()
{
    std::cout << "You feed " << name << " the Horse some bundles of hay. They seem to enjoy eating it more than the grass in the field!" << '\n';
    fed = true;
};

Cow::~Cow() // Default Destructor
{
}