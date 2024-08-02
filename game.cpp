#include<iostream>
/* for randum number genrater */
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
    /*Intilazer randum number*/
    srand(time(0));
    
    //Array to\ store option  
    string option[3]={"rook","peper","Scissors"};

    while (true) {
        // Get user's choice
        int userChoice;
        cout << "Enter your choice (0 for Rock, 1 for Paper, 2 for Scissors, 3 to Quit): ";
        cin >> userChoice;

        if (userChoice == 3) 
        {
            break; // Exit the loop if user chooses to quit
        }
        // Genrate randum computers choise 
        int comuterChoise = rand() % 3;

        // Ditermine the continue or not
        if (userChoice == comuterChoise) {
            cout << "It's a tie!" << endl;
        }
        
        if (userChoice<0 ||/*or oprater*/ userChoice>3)
        {
            cout<<"invalid input please enter a number between 0 and 3"<<endl;
            break;
        }
        
        // display both choise
        cout<<"this is ur choise "<<option[userChoice]<<endl;
        cout<<"this is a com choise "<<option[comuterChoise]<<endl;

        // Ditermine the winner
        if ((userChoice == 0 && comuterChoise == 2) || (userChoice == 1 && comuterChoise == 0) ||
                   (userChoice == 2 && comuterChoise == 1)) {
            cout << "You win!" << endl;
        }
        else{
            cout<<"Your loose!";
        }
        cout<<endl; //it is for blank line
    }

    cout<<"thank u for playing wist again"<<endl;
}