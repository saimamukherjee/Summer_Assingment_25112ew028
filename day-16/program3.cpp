#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    int num1 = 0, num2 = 0, target;
    cout << "enter target sum = ";
    cin >> target;
    while(true){
        num1 = (rand() % 20) + 1;
        num2 = (rand() % 20) +1;
        cout << "trying: " << num1 << " + " << num2 << " = " << ( num1 + num2 ) << "\n";
        if(num1 + num2 == target){
            cout << "\nSuccess! Pair fount :" << num1 << "," << num2 << endl;
            break;
        }
    }
    return 0;
}


    