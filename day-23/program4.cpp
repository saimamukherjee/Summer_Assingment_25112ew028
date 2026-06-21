#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    cout << "enter a string :";
    getline(cin, str);
    int count[256] = {0};
    int maxcount = -1;
    char result;
    for(int i = 0; i < str.length(); i++){
        count[(unsigned char)str[i]]++;
    }
    for(int i = 0; i < str.length() ; i++){
        if(maxcount < count[(unsigned char)str[i]]){
            maxcount = count[(unsigned char)str[i]];
            result = str[i];
        }
    }
    if(str.empty()){
        cout << "string id empty" << endl;

    }
    else{
        cout << "maximum occuring character is :"<< result << endl;
    }
    return 0;
}
