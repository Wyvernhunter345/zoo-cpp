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

Horse::~Horse() // Default Destructor
{
    // DESTROY THE Horse HAHAHAHA
    // not much else to say here...
}