//#ifndef "ZOO_H"
#define "ZOO_H"

class Zoo{
    public:
    Zoo(); // default constructor
    ~Zoo(); // default destructor 
    void feedAnimal(); // function to feed an animal
    void viewAnimals(); // function to view all animals in the zoo
    void viewHungry(); // function to view all animals that need feeding in the zoo
    void removeAnimal(); // function to remove an animal from the zoo
    void addAnimal(); // function to add an animal to the zoo
    void nameDetector(); // function that finds the object the user wants to alter
    int nextDay(DayCount); // switches to next day

    private:
    bool used_cage[10];
    bool in_zoo[12];
};

#endif