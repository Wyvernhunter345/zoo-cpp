#ifndef _ZOO_H
#define _ZOO_H
#include <string>

using namespace std;

class Zoo
{
private:
    int index = 0;
public:
    Zoo();                   // Default Constructor

    void feed();
    void feedSilently(int index); // Feed the animal without returning any text. Used for setup purposes
    void unfeed();                // Sets 'fed' to false

    void addAnimal();    // Add an animal to the zoo
    void removeAnimal(); // Remove an animal from the zoo

    void viewAnimals(); // View all animals currently in the zoo
    ~Zoo();             // Default Destructor
};

#endif // _ZOO_H
