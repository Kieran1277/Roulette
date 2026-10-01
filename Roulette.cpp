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
    } else {
        cout << "You Lose :(" << endl;
    }
    
    main();
}
