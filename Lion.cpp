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