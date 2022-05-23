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

int main()
{
  bool used_cage[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};   // 1 indicates cage full, 0 indicates empty
  int in_zoo[12] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; // what animals are in the zoo, 1 indicates in, 0 indicates not
                                                         // order of lion,lion,tiger,tiger,zebra,zebra,horse,horse,cow,cow,sheep,sheep

  bool isRunning = true; /* Determines whether the program is currently running.
                          * If false, the program will terminate. */
  int days = 0;          // Days passed in the virtual zoo

  vector<Animal *> animals;
  animals[0] = new Sheep();

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
           << "A: Add Animal\nR: Remove Animal\nF: Feed Animal\nV: View Animals\nH: View Hungry Animals\nC: Quit the application\n(Enter): Skip to next day\n\n";
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
