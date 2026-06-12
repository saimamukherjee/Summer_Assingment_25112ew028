#include <iostream>
using namespace std;
long long findFactorial(int n){
    if (n < 0){
        return -1;
    }
    long long fact = 1;
    for (int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}
int main(){
     int num;
    cout << "enter the number:";
    cin >> num; 
    long long factorial = findFactorial(num);
    if (factorial == -1){
        cout << "factorial is not defined for negative numbers." << endl;
    }
    else{
        cout << "the factorial of " << num << " is: " << factorial << endl;
    }   
    return 0;
}