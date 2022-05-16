#include "Tiger.h"
#include <iostream>
#include <string>

using namespace std;

Tiger::Tiger()
{
    name = "";
    cage = 0;
}

Tiger::Tiger(string n)
{
    name = n;
    cage = 0;
}

Tiger::Tiger(string n, int id)
{
    name = n;
    cage = id;
}

Tiger::~Tiger() // Default Destructor
{
}