#include <iostream>
#include <string>
#include <vector>
#include "Animal.h"
#include "Cow.h"
#include "Horse.h"
#include "Sheep.h"
#include "Tiger.h"
#include "Zebra.h"
#include "Zoo.h"
#include "Lion.h"
using namespace std;

vector<Animal *> animals;

int main()
{
  bool isRunning = true; /* Determines whether the program is currently running.
                          * If false, the program will terminate. */
  int days = 0;          // Days passed in the virtual zoo

  Zoo animalManager;

  cout
      << "=================================" << '\n'
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
           << "A: Add Animal\nR: Remove Animal\nF: Feed Animal\nV: View Animals\nVH: View Hungry Animals\nC: Quit the application\n(Enter): Skip to next day\n\n";
    }
    else if (action == "C" || action == "c")
    {
      cout << "Program closing... See you later!" << '\n';
      return 0;
    }
    else if (action == "A" || action == "a")
    {
      animalManager.addAnimal();
    }
    else if (action == "R" || action == "r")
    {
      animalManager.removeAnimal();
    }
    else if (action == "V" || action == "v")
    {
      animalManager.viewAnimals();
    }
    else
    {
      cout << "Not a valid command!"
           << "\n\n";
    }
  }
  return 0;
}
