#include <iostream>
#include <string>
using namespace std;
int main(){
    string str1 = "hello";
    string str2 = "world";
    bool present[256] = {false};
    bool printed[256] = {false};
    for(int i = 0; i < str1.length() ; i++){
        present[(unsigned char) str1[i]] = true;
    }
    cout << "common characters :";
    for(int i = 0; i < str2.length(); i++){
        unsigned char ch = str2[i];
        if(present[ch] && !printed[ch]){
            cout << ch << " ";
            printed[ch] = true;
        }
    }
    cout << endl;
    return 0;
}