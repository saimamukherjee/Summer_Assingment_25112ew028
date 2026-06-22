#include <iostream>
#include <string>
using namespace std;
int main(){
    string str1, str2;
    cout << "enter first string :";
    cin >> str1;
    cout << "enter second string :";
    cin >> str2;
    if(str1.length() == str2.length()&& !str1.empty()){
        string combined = str1 + str1;
        if(combined.find(str2) != string::npos){
            cout << str2 << " is a rotation of " << str1 << endl;
        }
        else{
            cout << str2 << " is not a rotation of " << str1 << endl;
        }
    }
    else{
        cout << str2 << " is not a rotation of " << str1 << endl;
    }
    return 0;
}