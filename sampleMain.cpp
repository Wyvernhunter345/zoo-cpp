#include <iostream>
#include "Animal.h"
#include "Cow.h"
#include "Horse.h"
#include "Lion.h"
#include "Sheep.h"
#include "Tiger.h"
#include "Zebra.h"
#include "Zoo.h"

using namespace std;

int main()
{
    Tiger Tiger1 = Tiger("Billy", 1); // constructor has name then cage number
    Tiger Tiger2 = Tiger("Harris", 2);
    Lion Lion1 = Lion("Zack");
    Zebra Zebra1 = Zebra("Maria", 3);
    Zebra Zebra2 = Zebra("Nancy");
    Sheep Sheep1 = Sheep("Trishna");
    Sheep Sheep2 = Sheep("Paul", 4);
    Cow Cow1 = Cow("Lambert", 7);
    Cow Cow2 = Cow("Maurice");
    Horse Horse1 = Horse("Billy", 10);
    Horse Horse2 = Horse("Nicole", 9);
    cout << "Compilation OK!" << '\n';
    return 0;
}