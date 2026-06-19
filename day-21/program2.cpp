#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    cout << "enter a string :";
    getline(cin , str);
    int start = 0;
    int end =str.length() - 1;
    while(start < end){
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start ++;
        end --;
    }
    cout << "reversed string :" << str << endl;
    return 0;
}