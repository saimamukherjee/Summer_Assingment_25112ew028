#include <iostream>
using namespace std;
int main(){
    int age;
    cout << "enter the age :";
    cin >> age;
    if(age >= 18){
        cout << "you are eleigible to vote." << endl;
    }
    else{
        cout << "you cannot vote.";
    }
    return 0;
}