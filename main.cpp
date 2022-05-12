#include <iostream>
#include <string>
// include all other things that need to be present
using namespace std;

int main(){
    // user has launched program
    bool running = 1;
    string answer;
    while (running == 1){
        cout << "What would you like to do?" << endl;
        cout << "A: Add Animal" << endl << "R: Remove Animal" << endl;
        cout << "V: View Animals to be fed" << endl;
        cout << "C: Close Program" << endl;
        cin >> answer;

        if (answer == "A"){
            // run zoo object add_animal
        }

        else if (answer == "R"){
            // run zoo object remove_animal
        }

        else if (answer == "Y"){
            // run zoo object view_feeding
        }

        else if (answer == "C"){
            running = 0;
        }
        
        else {
        cout << "Please enter a valid command";
        }
        
    }
}