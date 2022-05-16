#include <iostream>
#include <string>
using namespace std;

// default constructor
Zoo::Zoo(){
    bool used_cage[10] = {1,1,1,1,0,0,1,1,1,1}; // 1 indicates cage full, 0 indicates empty
    bool in_zoo[12] = {1,0,1,1,0,1,1,1,0,0,1,1} // what animals are in the zoo, 1 indicates in, 0 indicates not
    // order of lion,lion,tiger,tiger,zebra,zebra,horse,horse,cow,cow,sheep,sheep
}

// default destructor
Zoo::~Zoo(){

}

// go to next day
int Zoo::nextDay(DayCount){
    Tiger1->setFeed(0);
    Tiger2->setFeed(0);
    Lion1->setFeed(0);
    Lion2->setFeed(0);
    return DayCount + 1;
}

// feed animal
void Zoo::feedAnimal(){
    int type; // what type of animal are we feeding?
    cout << "What type of animal do you wish to feed?" << endl;
    cout << "0: "
    cin >> type; // read in from user

}
    void viewAnimals(); // function to view all animals in the zoo
    void viewHungry(); // function to view all animals that need feeding in the zoo
    void removeAnimal(); // function to remove an animal from the zoo
    void addAnimal(); // function to add an animal to the zoo
