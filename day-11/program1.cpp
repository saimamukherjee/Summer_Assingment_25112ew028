#include <iostream>
using namespace std;
int findSum(int a, int b){
    return a + b;
}
int main(){
    int num1, num2;
    cout << "enter the first number:";
    cin >> num1;
    cout << "enter the second number:";
    cin >> num2;
    int sum = findSum(num1, num2);
    cout << "the sum of " << num1 << " and " << num2 << " is: " << sum << endl;
    return 0;
}
