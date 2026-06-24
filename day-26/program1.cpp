#include <iostream>
#include <random>
using namespace std;
int main(){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distr(1, 100);
    int target = distr(gen);
    int guess = 0;
    int attempts = 0;
    cout << "-----NUMBER GUESSING GAME------" << endl;
    cout << "i've picked a number between 1 to 100. Try to guess it!" << endl;
    while(guess != target){
        cout << "enter your guess :";
        cin >> guess;
        attempts++;
        if(guess > target){
            cout << "too high! Try again.";
        }
        else if(guess < target){
            cout << "too low! Try again." << endl;
        }
        else {
            cout << "congratulations! you guessed it right in " << attempts << "attempts." << endl;
        }
    }
    return 0;
}