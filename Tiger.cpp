#include "Tiger.h"
#include <iostream>
#include <string>

using namespace std;

Tiger::Tiger()
{
    name = "";
    fed = true;
}

Tiger::Tiger(string n)
{
    name = n;
    fed = true;
}

Tiger::Tiger(string n, bool isf)
{
    name = n;
    fed = isf;
}

void Tiger::feed()
{
    cout << "You feed " << name << " the Tiger a chunk of meat. They seem very happy!" << '\n';
    fed = true;
}

string Tiger::getSpecies()
{
    return "Tiger";
}

Tiger::~Tiger() // Default Destructor
{
}