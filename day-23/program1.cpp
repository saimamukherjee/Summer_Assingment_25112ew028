#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    cout << "enter a string :";
    cin >> str;
    int count[256] = {0};
    for(int i = 0; i <str.length(); i++){
        count[(unsigned char)str[i]]++;
    }
    char result = '\0';
    for(int i =0;i <str.length(); i++){
        if(count[(unsigned char)str[i]]==1){
            result = str[i];
            break;
        }
    }
    if(result != '\0'){
        cout << "the first non-repeating character is: " << result << endl;
    }
    else{
        cout << "all characters repeated " << endl;
    }
    return 0;
}