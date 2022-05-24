#include "Zebra.h"
#include <iostream>
#include <string>

using namespace std;

Zebra::Zebra()
{
    name = "";
    fed = true;
}

Zebra::Zebra(string n)
{
    name = n;
    fed = true;
}

Zebra::Zebra(string n, bool isf)
{
    name = n;
    fed = isf;
}

void Zebra::feed()
{
    cout << "You feed " << name << " the Zebra some grass. They seem to like it!"
         << "\n";
    fed = true;
}

string Zebra::getSpecies()
{
    return "Zebra";
}

Zebra::~Zebra() // Default Destructor
{
}