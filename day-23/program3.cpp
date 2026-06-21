#include <iostream>
#include <string>
using namespace std;
int main(){
    string str1, str2;
    cout << "enter the first srting :";
    cin >> str1;
    cout << "enter the second string :";
    cin >> str2;
    if(str1.length() != str2.length()){
        cout << "\"" <<str1 << "\" and \"" <<str2 << "\" are not anagrams." << endl;
        return 0;
    }
    int frequency[256] = {0};
    for(size_t i = 0; i < str1.length(); i++){
        frequency[(unsigned char)str1[i]]++;
        frequency[(unsigned char)str2[i]]--;
    }
    bool isAnagram = true;
    for(int i =0; i<256; i++){
        if(frequency[i] != 0){
            isAnagram = false;
            break;
        }
    }
    if(isAnagram){
        cout << "\"" << str1 << "\" and \"" << str2 << "\" are anagrams" << endl;
    }
    else{
        cout << "\"" << str1 << "\" and \"" << str2 << "\" are  not anagrams" << endl;
    }
    return 0;
}