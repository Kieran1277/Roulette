#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <random>

using namespace std; 

int main() {
    
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> wheelChoice(1, 2); 

    cout << "Red (R) or Black (B)? ";
    string playerChoice;
    cin >> playerChoice;

    if (playerChoice != "R" && playerChoice != "B") {
        cout << "Type R or B, Case Sensitive";
        exit(0);
    }

    int colorResult = wheelChoice(gen); 
    
    cout << "The wheel landed on: ";
    if (colorResult == 1) {
        cout << "Red" << endl;
    } else {
        cout << "Black" << endl;
    }
    
    int playerResult;
    if (playerChoice == "R") {
        playerResult = 1;
    } else {
        playerResult = 2;
    }

    
    if (playerResult == colorResult) {
        cout << "You Win!" << endl;
    } else if (playerResult != colorResult && (colorResult == 1 || colorResult == 2)) {
        cout << "You Lose :(" << endl;
    } else {
        cout << "Type R or B, Case Sensitive";
        exit(0);
    }
    
    main();
}
