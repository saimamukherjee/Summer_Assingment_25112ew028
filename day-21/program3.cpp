#include <iostream>
#include <string>
using namespace std;
int main(){
    string inputString;
    int vowelsCount = 0;
    int consonantsCount = 0;
    cout << "enter a string :";
    getline(cin , inputString);
    for(char ch : inputString){
        if(ch >='a' && ch <= 'z'){
            if(ch == 'a' || ch =='e' || ch == 'i' || ch == 'o' || ch == 'u' ){
                vowelsCount++;
            }
            else{
                consonantsCount++;
            }
        }
        else if( ch >= 'A' && ch <= 'Z'){
            if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O'|| ch == 'U'){
                vowelsCount++;
            }
            else{
                consonantsCount++;
            }
        }
        
    }
    cout << "results" << endl;
    cout << "total vowel : "<< vowelsCount << endl;
    cout << "total consonants :" << consonantsCount << endl;
    return 0;

}