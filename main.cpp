#include <iostream>
#include <string>
#include "Animal.h"
#include "Cow.h"
#include "Horse.h"
#include "Sheep.h"
#include "Tiger.h"
#include "Zebra.h"
#include "Zoo.h"
#include "Lion.h"
using namespace std;

int main()
{
  bool used_cage[10] = {1, 1, 1, 1, 0, 0, 1, 1, 1, 1};   // 1 indicates cage full, 0 indicates empty
  int in_zoo[12] = {1, 0, 1, 1, 0, 1, 1, 1, 0, 0, 1, 1}; // what animals are in the zoo, 1 indicates in, 0 indicates not
                                                         // order of lion,lion,tiger,tiger,zebra,zebra,horse,horse,cow,cow,sheep,sheep

  // Creating objects - for separate area
  Tiger Tiger1 = Tiger("Billy", 1); // constructor has name then cage number
  Tiger Tiger2 = Tiger("Harris", 2);
  Lion Lion1 = Lion("Mohammed"); // constructor can also just have name if not assigned to cage
  Lion Lion2 = Lion("Joe", 8);
  Zebra Zebra1 = Zebra("Maria", 3);
  Zebra Zebra2 = Zebra("Nancy");
  Sheep Sheep1 = Sheep("Trishna");
  Sheep Sheep2 = Sheep("Paul", 4);
  Cow Cow1 = Cow("Lambert", 7);
  Cow Cow2 = Cow("Maurice");
  Horse Horse1 = Horse("Billy", 10);
  Horse Horse2 = Horse("Nicole", 9);

  // The user has pressed 'A' to add an animal

  // Find the position
  int cage_number = 11;
  for (int i = 0; i < 9; i++)
  {
    if (used_cage[i] == 0)
    {
      cage_number = i + 1;
      break;
    }
  }

  // if all enclosures full
  if (cage_number > 10 or cage_number < 1)
  {
    cout << "There are no empty enclosures to add an animal to" << '\n';
    // program returns something to quit
  }

  // get animal's name
  cout << "Enter the animal's name" << '\n';
  string name;
  cin >> name;

  // has animal been fed?
  cout << "Has the animal been fed today?";
  cout << "Y: Yes, Other: No" << '\n';
  bool fed;
  string entered;
  cin >> entered;
  if (entered == "Y")
  {
    fed = 1;
  }
  else
  {
    fed = 0;
  }

  // get type of animal
  int resp;
  cout << "What type of animal is it?" << '\n';
  cout << "0 = Lion, 1 = Tiger, 2 = Zebra" << '\n';
  cout << "3 = Horse, 4 = Cow, 5 = Sheep" << '\n';
  cin >> resp;
  if (resp > 5 or resp < 0)
  {
    cout << "That is not a valid animal";
    // program return something to quit
  }

  /* passes bug test at this point
   */

  // add animal to zoo

  switch (resp)
  {

  /* case 0:
    if (in_zoo[0] == 0)
    {
      Lion1.setCage(cage_number);
      Lion1.setName(name);
      Lion1.feedSilently();
      cout << "Lion successfully added to the zoo";
    }

    else if (in_zoo[1] == 0)
    {
      Lion2.setCage(cage_number);
      Lion2.setName(name);
      Lion2.feedSilently();
      cout << "Lion successfully added to the zoo";
    }

    else
    {
      cout << "Sorry, the zoo already has the maximum number of lions";
    }
    break;
  */
  case 1:
    if (in_zoo[2] == 0)
    {
      Tiger1.setCage(cage_number);
      Tiger1.setName(name);
      Tiger1.feedSilently();
      cout << "Tiger successfully added to the zoo";
    }

    else if (in_zoo[3] == 0)
    {
      Tiger2.setCage(cage_number);
      Tiger2.setName(name);
      Tiger2.feedSilently();
      cout << "Tiger successfully added to the zoo";
    }

    else
    {
      cout << "Sorry, the zoo already has the maximum number of tigers";
    }
    break;

  case 2:
    if (in_zoo[4] == 0)
    {
      Zebra1.setCage(cage_number);
      Zebra1.setName(name);
      Zebra1.feedSilently();
      cout << "Zebra successfully added to the zoo";
    }

    else if (in_zoo[5] == 0)
    {
      Zebra2.setCage(cage_number);
      Zebra2.setName(name);
      Zebra2.feedSilently();
      cout << "Zebra successfully added to the zoo";
    }

    else
    {
      cout << "Sorry, the zoo already has the maximum number of zebras";
    }
    break;

  case 3:
    if (in_zoo[6] == 0)
    {
      Horse1.setCage(cage_number);
      Horse1.setName(name);
      Horse1.feedSilently();
      cout << "Horse successfully added to the zoo";
    }

    else if (in_zoo[7] == 0)
    {
      Horse2.setCage(cage_number);
      Horse2.setName(name);
      Horse2.feedSilently();
      cout << "Horse successfully added to the zoo";
    }

    else
    {
      cout << "Sorry, the zoo already has the maximum number of horses";
    }
    break;

  case 4:
    if (in_zoo[8] == 0)
    {
      Cow1.setCage(cage_number);
      Cow1.setName(name);
      Cow1.feedSilently();
      cout << "Cow successfully added to the zoo";
    }

    else if (in_zoo[9] == 0)
    {
      Cow2.setCage(cage_number);
      Cow2.setName(name);
      Cow2.feedSilently();
      cout << "Cow successfully added to the zoo";
    }

    else
    {
      cout << "Sorry, the zoo already has the maximum number of cows";
    }
    break;

  default:
    if (in_zoo[10] == 0)
    {
      Sheep1.setCage(cage_number);
      Sheep1.setName(name);
      Sheep1.feedSilently();
      cout << "Sheep successfully added to the zoo";
    }

    else if (in_zoo[11] == 0)
    {
      Sheep2.setCage(cage_number);
      Sheep2.setName(name);
      Sheep2.feedSilently();
      cout << "Sheep successfully added to the zoo";
    }

    else
    {
      cout << "Sorry, the zoo already has the maximum number of sheep";
    }
    break;
  }
}
