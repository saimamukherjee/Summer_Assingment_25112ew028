#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    cout <<"enter a string :";
    getline(cin, str);
    int charcount[256] = {0};
    char firstrepeat = '\0';
    for(char ch : str){
        unsigned char index = static_cast<unsigned char >(ch);
        if(charcount[index]){
            firstrepeat = ch;
            break;
        }
        charcount[index] = true;
    }
    if(firstrepeat != '\0'){
        cout << "the first repeating character is :" << firstrepeat << endl;
    }
    else{
        cout << "no repeating characters found " << endl;
    }
    return 0;
    
}