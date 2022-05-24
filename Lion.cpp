#include "Lion.h"
#include <iostream>
#include <string>

using namespace std;

Lion::Lion()
{
    name = "";
    fed = true;
}

Lion::Lion(string n)
{
    name = n;
    fed = true;
}

Lion::Lion(string n, bool isf)
{
    name = n;
    fed = isf;
}

void Lion::feed()
{
    cout << "You feed " << name << " the Lion some meat. They almost swallow it whole!" << '\n';
    fed = true;
}

string Lion::getSpecies()
{
    return "Lion";
}

Lion::~Lion() // Default Destructor
{
}
