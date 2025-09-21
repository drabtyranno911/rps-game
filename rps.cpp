#include <iostream>
#include <cstdlib>  // Its for rand() and srand()
#include <ctime>    // and this is for time()

using namespace std;

int main() {
    srand(time(0));  // Random Generator

    int userChoice, computerChoice;
    string choices[3] = {"Rock", "Paper", "Scissors"};

    cout << "==== Rock Paper Scissors ====\n";
    cout << "1. Rock\n2. Paper\n3. Scissors\n";  //To display the options 
    cout << "Enter your choice (1-3): ";
    cin >> userChoice;

    if (userChoice < 1 || userChoice > 3) {
        cout << "Invalid choice!\n";
        return 0;
    }

    // Computer chooses randomly (1 to 3)
    computerChoice = (rand() % 3) + 1;

    cout << "You chose: " << choices[userChoice - 1] << endl;
    cout << "Computer chose: " << choices[computerChoice - 1] << endl;

    // To determine the winner
    if (userChoice == computerChoice) {
        cout << "It's a draw!\n";
    } else if ((userChoice == 1 && computerChoice == 3) ||
               (userChoice == 2 && computerChoice == 1) ||
               (userChoice == 3 && computerChoice == 2)) {
        cout << "YOU WIN!\n";
    } else {
        cout << "Computer wins!\n";
    }

    return 0;
}
