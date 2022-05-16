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

Zebra::~Zebra() // Default Destructor
{
}