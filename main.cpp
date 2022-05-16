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

extern void addAnimal();

bool used_cage[10] = {1, 1, 1, 1, 0, 0, 1, 1, 1, 1};   // 1 indicates cage full, 0 indicates empty
int in_zoo[12] = {1, 0, 1, 1, 0, 1, 1, 1, 0, 0, 1, 1}; // what animals are in the zoo, 1 indicates in, 0 indicates not
                                                       // order of lion,lion,tiger,tiger,zebra,zebra,horse,horse,cow,cow,sheep,sheep

bool isRunning = true; /* Determines whether the program is currently running.
                        * If false, the program will terminate. */
int days = 0;          // Days passed in the virtual zoo

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

int main()
{
  cout << "=================================" << '\n'
       << "|| Welcome to the Zoo Manager! ||" << '\n'
       << "=================================" << '\n'
       << "Day " << days << "" << '\n'
       << "=====" << '\n';

  while (isRunning)
  {
    cout << "Enter an action (H for help): ";
    string action = "";
    cin >> action; // Takes user input as a string
    cout << '\n';

    /* Cycles through potential correct inputs until it finds a match.
       If it doesn't find a match, terminate the command.

       A switch statement would be far more efficient but you can't
       use switch on a string, hence this is the second best option. */

    if (action == "H" || action == "h")
    {
      cout << "COMMAND LIST" << '\n'
           << "------------" << '\n'
           << "A: Add Animal\nR: Remove Animal\nF: Feed Animal\nV: View Animals\nH: View Hungry Animals\nC: Quit the application\n(Enter): Skip to next day\n\n";
    }
    else if (action == "C" || action == "c")
    {
      cout << "Program closing... See you later!" << '\n';
      return 0;
    }
    else if (action == "A" || action == "a")
    {
      addAnimal();
    }
  }
  return 0;
}
