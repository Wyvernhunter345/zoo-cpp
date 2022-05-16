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

extern bool used_cage[10];
extern int in_zoo[12];

extern Tiger Tiger1;
extern Tiger Tiger2;
extern Lion Lion1;
extern Lion Lion2;
extern Zebra Zebra1;
extern Zebra Zebra2;
extern Horse Horse1;
extern Horse Horse2;
extern Cow Cow1;
extern Cow Cow2;

void addAnimal()
{
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
    cout << "Enter the animal's name: ";
    string name;
    cin >> name;

    // has animal been fed?
    cout << "\nHas the animal been fed today? \n";
    cout << "(Y: Yes, Other: No): ";
    bool fed;
    string entered;
    cin >> entered;
    if (entered == "Y")
    {
        fed = 1;
    }
    else if (entered == "N")
    {
        fed = 0;
    }
    else
    {
        cout << "Invalid option entered, defaulting to Yes..." << '\n';
        fed = 1;
    }

    // get type of animal
    int resp;
    cout << '\n'
         << "What type of animal is it?" << '\n'
         << "==================================" << '\n'
         << "||0 = Lion, 1 = Tiger, 2 = Zebra||" << '\n'
         << "||3 = Horse, 4 = Cow, 5 = Sheep ||" << '\n'
         << "==================================" << '\n'
         << "Number: ";
    cin >> resp;
    cout << '\n';
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

    case 0:
        if (in_zoo[0] == 0)
        {
            Lion1.setCage(cage_number);
            Lion1.setName(name);
            Lion1.feedSilently();
            cout << "Lion successfully added with cage number " << cage_number << "!" << '\n';
        }

        else if (in_zoo[1] == 0)
        {
            Lion2.setCage(cage_number);
            Lion2.setName(name);
            Lion2.feedSilently();
            cout << "Lion successfully added with cage number " << cage_number << "!" << '\n';
        }

        else
        {
            cout << "Sorry, the zoo already has the maximum number of lions";
        }
        break;
    case 1:
        if (in_zoo[2] == 0)
        {
            Tiger1.setCage(cage_number);
            Tiger1.setName(name);
            Tiger1.feedSilently();
            cout << "Tiger successfully added with cage number " << cage_number << "!" << '\n';
        }

        else if (in_zoo[3] == 0)
        {
            Tiger2.setCage(cage_number);
            Tiger2.setName(name);
            Tiger2.feedSilently();
            cout << "Tiger successfully added with cage number " << cage_number << "!" << '\n';
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
            cout << "Zebra successfully added with cage number " << cage_number << "!" << '\n';
        }

        else if (in_zoo[5] == 0)
        {
            Zebra2.setCage(cage_number);
            Zebra2.setName(name);
            Zebra2.feedSilently();
            cout << "Zebra successfully added with cage number " << cage_number << "!" << '\n';
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
            cout << "Horse successfully added with cage number " << cage_number << "!" << '\n';
        }

        else if (in_zoo[7] == 0)
        {
            Horse2.setCage(cage_number);
            Horse2.setName(name);
            Horse2.feedSilently();
            cout << "Horse successfully added with cage number " << cage_number << "!" << '\n';
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
            cout << "Cow successfully added with cage number " << cage_number << "!" << '\n';
        }

        else if (in_zoo[9] == 0)
        {
            Cow2.setCage(cage_number);
            Cow2.setName(name);
            Cow2.feedSilently();
            cout << "Cow successfully added with cage number " << cage_number << "!" << '\n';
        }

        else
        {
            cout << "Sorry, the zoo already has the maximum number of cows";
        }
        break;

    default:
        cout << "Not a valid animal! Aborting..." << '\n';
        break;
    }
}
