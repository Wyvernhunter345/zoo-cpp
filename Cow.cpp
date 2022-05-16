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

Cow::~Cow() // Default Destructor
{
}