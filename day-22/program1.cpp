#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    cout << "enter a string :";
    cin >> str;
    int len = 0;
    while(str[len] != '\0'){
        len++;
    }
    int low = 0;
    int high = len - 1;
    bool isPalindrome = true;
    while(low < high){
        if(str[low] != str[high]){
            isPalindrome = false;
            break;
        }
        low++;
        high--;
    }
    if(isPalindrome){
        cout << str << " is a palindrome." << endl;
    }
    else{
        cout << str << " is not a palindrome. " << endl;
    }
    return 0;

}