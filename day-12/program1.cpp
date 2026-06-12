#include <iostream>
using namespace std;
bool isPlindrome(int num){
    int original = num;
    int rev = 0;
    while(num > 0){
        int digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }
    return original == rev;
}
int main(){
    int number;
    cout << "enter a number: ";
    cin >> number;
    if(isPlindrome(number)){
        cout << number << " is a palindrome number." << endl;
    } else {
        cout << number << " is not a palindrome number." << endl;
    }
    return 0;
}
