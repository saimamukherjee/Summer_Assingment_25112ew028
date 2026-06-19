#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    int lenght = 0;
    cout << "enter a string :";
    getline(cin , str);
    for(char c : str){
        lenght++;
    }    
    cout << "lenght of the string is : " << lenght << endl;
    return 0;
}