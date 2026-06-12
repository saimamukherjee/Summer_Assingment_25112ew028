#include <iostream>
using namespace std;
bool isArmstrong(int num){
    int sum = 0;
    int temp = num;
    while(temp > 0){
        int digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }
    return (sum == num);
}
int main(){
    int num;
    cout << "enter the number :";
    cin >> num;
    if(isArmstrong(num)){
        cout << num << " is an armsstrong number";
    }
    else{
        cout << num << " is not an armstorng number";
    }
    return 0;
}