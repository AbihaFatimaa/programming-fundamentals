#include <iostream>
#include <cstdlib>   
#include <ctime>     

using namespace std;

int main() {
    int userChoice, computerChoice;

    srand(time(0));  
    cout << "?? Rock Paper Scissors Game\n";
    cout << "1. Rock\n2. Paper\n3. Scissors\n";
    cout << "Enter your choice (1-3): ";
    cin >> userChoice;

    computerChoice = rand() % 3 + 1;

    cout << "\nComputer chose: ";
    if (computerChoice == 1) cout << "Rock\n";
    else if (computerChoice == 2) cout << "Paper\n";
    else cout << "Scissors\n";

    
    if (userChoice == computerChoice) {
        cout << "It's a draw!\n";
    }
    else if (
        (userChoice == 1 && computerChoice == 3) ||
        (userChoice == 2 && computerChoice == 1) ||
        (userChoice == 3 && computerChoice == 2)
    ) {
        cout << "You win!\n";
    }
    else {
        cout << "Computer wins!\n";
    }

    return 0;
}
