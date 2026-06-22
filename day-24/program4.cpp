#include <iostream>
#include <string>
using namespace std;
int main(){
    string str = "programming";
    cout << "original :" << str << "\n";
    int index = 0;
    for(int i = 0; i < str.length(); i++){
        int j ;
        for(j =0; j < i; j++){
            if(str[i] == str[j]){
                break;
            }
        }
        if(j == i){
            str[index++] = str[i];
        }
    }
    str.resize(index);
    cout << "result :" << str << "\n";
    return 0;
}
