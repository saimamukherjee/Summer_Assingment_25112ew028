#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    string result = "";
    cout << "enter a string :";
    getline(cin, str);
    int writeIndex = 0;
    for(int i = 0;i <str.length(); i++){
        if(str[i] != ' '){
            result += str[i];
        }
    }
    cout << "string after removing spaces:" << result << endl;
    return 0;
}
