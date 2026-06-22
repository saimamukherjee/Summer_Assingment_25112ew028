#include <iostream>
#include <string>
using namespace std;
int main(){
    string sentence;
    cout << "enter a sentence :";
    getline(cin, sentence);
    string current_word =  "";
    string longest_word = "";
    sentence += " ";
    for(char c : sentence){
        if(c != ' '){
            current_word += c;
        }
        else{
            if(current_word.length()> longest_word.length()){
                longest_word = current_word;
            }
            current_word = "";
        }
    }
    cout << "the longest word id :" << longest_word << endl;
    return 0;
}