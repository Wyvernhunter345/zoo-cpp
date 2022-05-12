#include <iostream>
#include <string>
using namespace std;

int main(){
  bool used_cage[10] = {1,1,1,1,0,0,1,1,1,1}; // 1 indicates cage full, 0 indicates empty
  int in_zoo[12] = {1,0,1,1,0,1,1,1,0,0,1,1} // what animals are in the zoo, 1 indicates in, 0 indicates not
  // order of lion,lion,tiger,tiger,zebra,zebra,horse,horse,cow,cow,sheep,sheep
//
  // Creating objects - for separate area
  Tiger Tiger1 = Tiger(Billy,1); // constructor has name then cage number
  Tiger Tiger2 = Tiger(Harris,2);
  Lion Lion1 = Lion(Mohammed); // constructor can also just have name if not assigned to cage
  Lion Lion2 = Lion(Joe,8);
  Zebra Zebra1 = Zebra(Maria,3);
  Zebra Zebra2 = Zebra(Nancy);
  Sheep Sheep1 = Sheep(Trishna);
  Sheep Sheep2 = Sheep(Paul,4);
  Cow Cow1 = Cow(Lambert,7);
  Cow Cow2 = Cow(Maurice);
  Horse Horse1 = Horse(Billy,10);
  Horse Horse2 = Horse(Nicole,9);


  // The user has pressed 'A' to add an animal
  
  // Find the position
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
  
  /* passes bug test at this point
  */

  // add animal to zoo

  switch(resp){

    case 0:
    if (in_zoo[0] == 0){
      Lion1.Cage = cage_number;
      Lion1.Name = name;
      Lion1.isfed = fed;
      cout << "Lion successfully added to the zoo";
    }

    else if (in_zoo[1] == 0){
      Lion2.Cage = cage_number;
      Lion2.Name = name;
      Lion2.isfed = fed;
      cout << "Lion successfully added to the zoo";
    }

    else{
      cout << "Sorry, the zoo already has the maximum number of lions";
    }
    break;

    case 1:
    if (in_zoo[2] == 0){
      Tiger1.Cage = cage_number;
      Tiger1.Name = name;
      Tiger1.isfed = fed;
      cout << "Tiger successfully added to the zoo";
    }

    else if (in_zoo[3] == 0){
      Tiger2.Cage = cage_number;
      Tiger2.Name = name;
      Tiger2.isfed = fed;
      cout << "Tiger successfully added to the zoo";
    }

    else{
      cout << "Sorry, the zoo already has the maximum number of tigers";
    }
    break;

    case 2:
    if (in_zoo[4] == 0){
      Zebra1.Cage = cage_number;
      Zebra1.Name = name;
      Zebra1.isfed = fed;
      cout << "Zebra successfully added to the zoo";
    }

    else if (in_zoo[5] == 0){
      Zebra2.Cage = cage_number;
      Zebra2.Name = name;
      Zebra2.isfed = fed;
      cout << "Zebra successfully added to the zoo";
    }

    else{
      cout << "Sorry, the zoo already has the maximum number of zebras";
    }
    break;

    case 3:
    if (in_zoo[6] == 0){
      Horse1.Cage = cage_number;
      Horse1.Name = name;
      Horse1.isfed = fed;
      cout << "Horse successfully added to the zoo";
    }

    else if (in_zoo[7] == 0){
      Horse2.Cage = cage_number;
      Horse2.Name = name;
      Horse2.isfed = fed;
      cout << "Horse successfully added to the zoo";
    }

    else{
      cout << "Sorry, the zoo already has the maximum number of horses";
    }
    break;

    case 4:
    if (in_zoo[8] == 0){
      Cow1.Cage = cage_number;
      Cow1.Name = name;
      Cow1.isfed = fed;
      cout << "Cow successfully added to the zoo";
    }

    else if (in_zoo[9] == 0){
      Cow2.Cage = cage_number;
      Cow2.Name = name;
      Cow2.isfed = fed;
      cout << "Cow successfully added to the zoo";
    }

    else{
      cout << "Sorry, the zoo already has the maximum number of cows";
    }
    break;

    default:
    if (in_zoo[10] == 0){
      Sheep1.Cage = cage_number;
      Sheep1.Name = name;
      Sheep1.isfed = fed;
      cout << "Sheep successfully added to the zoo";
    }

    else if (in_zoo[11] == 0){
      Sheep2.Cage = cage_number;
      Sheep2.Name = name;
      Sheep2.isfed = fed;
      cout << "Sheep successfully added to the zoo";
    }

    else{
      cout << "Sorry, the zoo already has the maximum number of sheep";
    }
    break;
  }
}
