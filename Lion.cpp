#include "Lion.h"
#include <iostream>
#include <string>

using namespace std;

Lion::Lion()
{
    name = "";
    cage = 0;
}

Lion::Lion(string n)
{
    name = n;
    cage = 0;
}

Lion::Lion(string n, int id)
{
    name = n;
    cage = id;
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
