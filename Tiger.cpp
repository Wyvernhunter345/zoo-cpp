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