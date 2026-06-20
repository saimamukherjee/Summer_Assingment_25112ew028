#include <iostream>
#include <string>
using namespace std;
int main(){
    string sentence;
    cout << "enter a sentence :";
    getline(cin , sentence);
    int count = 0;
    bool inWord = false;
    for(char ch : sentence){
        if(ch == ' '||ch == '\t'||ch=='\n'){
            inWord = false;
        }
        else if(!inWord){
            inWord = true;
            count ++;
        }

    }
    cout << "total number of words :" << count << endl;
    return 0;
}