#include <iostream>
#include <string>
using namespace std;

void error_call(){
    cout << "Sorry, we cannot find that animal";
}

int main(){

    // user has hit 'R' to remove an animal

    // get type of animal to remove
    string response;
    cout << "What type of animal do you wish to remove?" << endl;
    cout << "L: Lion, T: Tiger, Z: Zebra, H: Horse, S: Sheep, C: Cow";
    cin >> response;

    // get animal's name
    string name;
    cout << "What is the name of the animal you want removed?";
    cin >> name;

    // perform operation
    int a;
    switch (response){

        case "L": // Lion
        if (Lion1.name == name){
            a = Lion1.cage;
            Lion1.cage = 0; // this might need to be changed to get/set function
        }
        else if (Lion2.name == name){
            a = Lion2.cage;
            Lion2.cage = 0;
        }
        else {
            error_call();
        }
        break;
        
        case "T": // Tiger
        if (Tiger1.name == name){
            a = Tiger1.cage;
            Tiger1.cage = 0;
        }
        else if (Tiger2.name == name){
            a = Tiger2.cage;
            Tiger2.cage = 0;
        }
        else{
            error_call();
        }
        break;

        case "Z": // Zebra
        if (Zebra1.name == name){
            a = Zebra1.cage;
            Zebra1.cage = 0;
        }
        else if (Zebra2.name == name){
            a = Zebra2.cage;
            Zebra2.cage = 0;
        }
        else{
            error_call();
        }
        break;
        
        case "H": // Horse
        if (Horse1.name == name){
            a = Horse1.cage;
            Horse1.cage = 0;
        }
        else if (Horse2.name == name){
            a = Horse2.cage;
            Horse2.cage = 0;
        }
        else{
            error_call();
        }
        break;

        case "S":
        if (Sheep1.name == name){
            a = Sheep1.cage;
            Sheep1.cage = 0;
        }
        else if (Sheep2.name == name){
            a = Sheep2.cage;
            Sheep2.cage = 0;
        }
        else{
            error_call();
        }
        break;

        case "C":
        if (Cow1.name == name){
            a = Cow1.cage;
            Cow1.cage = 0;
        }
        else if (Cow2.name == name){
            a = Cow2.cage;
            Cow2.cage = 0;
        }
        else{
            error_call();
        }
        break;

        default: // if invalid animal type given
        error_call();
        // return something to terminate function
        break;
    }
    used_cage[a+1] = 0; // value in cage list changed to zero, indicating cage is free
    
}