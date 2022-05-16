#include <iostream>
using namespace std;

// user presses 'V' to View Animals
int Mode = 0;
printing(Mode);

// user presses 'H' to View Hungry Animals
int Mode = 1;
printing(Mode);

// this function will need to be of the zoo class once the class works
void printing(int type){
    values[10] = {0}; // stores what animal in what cage

if (Tiger1.getCage != 0){ // if the tiger is assigned to a cage
    if (type == 0 || Tiger1.isFed() == 0){ // if we are printing all caged animals OR if the tiger is hungry
        bool a = Tiger1.isFed(); // store whether tiger is fed or not in a
        values [a] = 1;
    }
}

if (Tiger2.getCage != 0){
    if (type == 0 || Tiger2.isFed() == 0){ 
        bool b = Tiger2.isFed(); // store whether tiger is fed or not in a
        values [b] = 2;
    }
}

if (Lion1.getCage != 0){
    if (type == 0 || Lion1.isFed() == 0){
        bool c = Lion1.isFed();
        values [c] = 3;
    }
}

if (Lion2.getCage != 0){
    if (type == 0 || Lion2.isFed() == 0){
        bool d = Lion2.isFed();
        values [d] = 4;
    }
}

if (Zebra1.getCage != 0){
    if (type == 0 || Zebra1.isFed() == 0){
        bool e = Zebra1.isFed();
        values [e] = 5;
    }
}

if (Zebra2.getCage != 0){
    if (type == 0 || Zebra2.isFed() == 0){
        bool f = Zebra2.isFed();
        values [f] = 6;
    }
}

if (Horse1.getCage != 0){
    if (type == 0 || Horse1.isFed() == 0){
        bool g = Horse1.isFed();
        values [g] = 7;
    }
}

if (Horse2.getCage != 0){
    if (type == 0 || Horse2.isFed() == 0){
        bool h = Horse2.isFed();
        values [h] = 8;
    }
}

if (Sheep1.getCage != 0){
    if (type == 0 || Sheep1.isFed() == 0){
        bool j = Sheep1.isFed();
        values [j] = 9;
    }
}

if (Sheep2.getCage != 0){
    if (type == 0 || Sheep2.isFed() == 0){
        bool k = Sheep2.isFed();
        values [k] = 10;
    }
}

if (Cow1.getCage != 0){
    if (type == 0 || Cow1.isFed() == 0){
        bool l = Cow1.isFed();
        values [l] = 11;
    }
}

if (Cow2.getCage != 0){
    if (type == 0 || Cow2.isFed() == 0){
        bool m = Cow2.isFed();
        values [m] = 12;
    }
}

// for each of the values array print the animals in order of cage number
for (int i = 0; i < 10; i++){
    switch(values[i]){
        case 1:
            cout << Tiger1.getName() << ", Tiger, Cage " << Tiger1.cageID() << endl;
            break;
        case 2:
            cout << Tiger2.getName() << ", Tiger, Cage " << Tiger2.cageID() << endl;
            break;
        case 3:
            cout << Lion1.getName() << ", Lion, Cage " << Lion1.cageID() << endl;
            break;
        case 4:
            cout << Lion2.getName() << ", Lion, Cage " << Lion2.cageID() << endl;
            break;
        case 5:
            cout << Zebra1.getName() << ", Zebra, Cage " << Zebra1.cageID() << endl;
            break;
        case 6:
            cout << Zebra2.getName() << ", Zebra, Cage " << Zebra2.cageID() << endl;
            break;
        case 7:
            cout << Horse1.getName() << ", Horse, Cage " << Horse1.cageID() << endl;
            break;
        case 8:
            cout << Horse2.getName() << ", Horse, Cage " << Horse2.cageID() << endl;
            break;
        case 9:
            cout << Sheep1.getName() << ", Sheep, Cage " << Sheep1.cageID() << endl;
            break;
        case 10:
            cout << Sheep2.getName() << ", Sheep, Cage " << Sheep2.cageID() << endl;
            break;
        case 11:
            cout << Cow1.getName() << ", Cow, Cage " << Cow1.cageID() << endl;
            break;
        case 12:
            cout << Cow2.getName() << ", Cow, Cage " << Cow2.cageID() << endl;
            break;
        default: // only occurs when 0, cage is empty
        break;
    }
}
}