#include "Zebra.h"
#include <iostream>
#include <string>

using namespace std;

Zebra::Zebra()
{
    name = "";
    cage = 0;
}

Zebra::Zebra(string n)
{
    name = n;
    cage = 0;
}

Zebra::Zebra(string n, int id)
{
    name = n;
    cage = id;
}

void Zebra::feed()
{
    cout << "You feed " << name << " the Zebra some grass. They seem to like it!"
         << "\n";
    fed = true;
}

Zebra::~Zebra() // Default Destructor
{
}