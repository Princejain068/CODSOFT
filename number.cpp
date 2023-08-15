#include<bits/stdc++.h>

using namespace std;

int main() {
    srand(static_cast<unsigned int>( time(0)));
   
    
    int num =  rand() % 100 + 1;
    int guess;
    cout<<"------------NUMBER GUSSING GAME------------------ "<<endl;
    cout << "Guess the number (between 1 and 100): ";

    while (true) {
        cin >> guess;
    
        if (guess == num) {
            cout << "Congratulations! You guessed the correct number!\n";
            break;
        } else if (guess < num) {
            cout << "Too low. Try again: ";
        } else {
            cout << "Too high. Try again: ";
        }
    }

    return 0;
}
