#include <iostream>
#include <string>
using namespace std;

bool used_cage[10] = {1,1,1,1,0,0,1,1,1,1}; // 1 indicates cage full, 0 indicates empty
int animal_nums[6] = {2,1,0,2,0,1}; // number of each animal objects

int main(){

  // The user has pressed 'A' to add an animal
  
  // Find the cage to add it to
  int cage_number = 11;
  for (int i = 0; i < 9; i++){
    if (used_cage[i] == 0){
      cage_number = i+1;
      break;
    }
  }
  
  // if all enclosures full
  if (cage_number > 10 or cage_number < 1){
    cout << "There are no empty enclosures to add an animal to" << endl;
    // program returns something to quit
  }

  // get type of animal
  int resp;
  cout << "What type of animal is it?" << endl;
  cout << "0 = Lion, 1 = Tiger, 2 = Zebra" << endl;
  cout << "3 = Horse, 4 = Cow, 5 = Sheep" << endl;
  cin >> resp;
  if (resp > 5 or resp < 0){
    cout << "That is not a valid animal";
    // program return something to quit
  }

  // get animal's name
  cout << "Enter the animal's name" << endl;
  string name;
  cin >> name;

  // has animal been fed?
  cout << "Has the animal been fed today?";
  cout << "Y: Yes, Other: No" << endl;
  bool fed;
  string entered;
  cin >> entered;
    if (entered == "Y"){
    fed = 1;
    }
    else{
    fed = 0;
  }
  
  /* passes bug test at this point
  */

  // create the constructor - to be updated

  switch(resp){

    case 0:
    Lion names[a] = Lion(name,fed,cage_number);
    break;

    case 1:
    Tiger names[a] = Tiger(name,fed,cage_number);
    break;

    case 2:
    Zebra names[a] = Zebra(name,fed,cage_number);
    break;

    case 3:
    Horse names[a] = Horse(name,fed,cage_number);
    break;

    case 4:
    Cow names[a] = Cow(name,fed,cage_number);
    break;

    default:
    Sheep names[a] = Sheep(name,fed,cage_number);
    break;
  }
}

// 