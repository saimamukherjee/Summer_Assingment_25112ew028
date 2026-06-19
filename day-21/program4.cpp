#include <iostream>
#include <string>
using namespace std;
int main(){
    string text;
    getline(cin , text);
    string uppertext = text;
    for(int i = 0; i < uppertext.length(); i++){
        if(uppertext[i] >= 'a' && uppertext[i] <= 'z'){
            uppertext[i] = uppertext[i] -32;
        }
    }
    cout << "manual uppercase :" << uppertext << endl;
    string lowertext = text;
    for(int i = 0; i < lowertext.length(); i++){
        if(lowertext[i] >= 'A' && lowertext[i] <= 'Z'){
            lowertext[i] = lowertext[i] + 32;
        }
    }
    cout << "manual lowercase :" << lowertext << endl;
    return 0;
}