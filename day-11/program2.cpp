#include <iostream>
using namespace std;
int findMax(int a, int b){
    return (a > b) ? a :b;
}
int main(){
    int num1, num2;
    cout << "enter two num:";
    cin >> num1 >> num2;
    cout << "the max number is " << findMax(num1, num2) << endl;
    return 0;
}