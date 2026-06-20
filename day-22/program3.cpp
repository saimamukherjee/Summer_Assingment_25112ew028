#include <iostream>
#include <string>
using  namespace std;
int main(){
    string str;
    cout << "enter a string :";
    getline(cin, str);
    cout << "character frequency :";
    for(int i = 0; i<str.length(); i++){
        int count = 0;
        bool already_counted = false;
        for(int j = 0; j< i; j++){
            if(str[i] == str[j]){
                already_counted = true;
                break;
            }
        }
        if(!already_counted){
            for(int j = 0; j < str.length(); j++){
                if(str[i] == str[j]){
                    count ++;
                }
            }
            cout << "'" << str[i] << "' : " << count << endl;
        }
    }
    return 0;
}