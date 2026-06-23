#include <iostream>
#include <string>
using namespace std;
int main(){
    string word[] = {"apple", "banana" , "kiwi", "strawberry"};
    int size = sizeof(word)/sizeof(word[0]);
    for(int i = 0; i < size-1; i++){
        int minIndex = i;
        for(int j = i + 1; j < size; j++){
            if(word[j].length() < word[minIndex].length()){
                minIndex = j;
            }
        }
        string temp = word[i];
        word[i] = word[minIndex];
        word[minIndex] = temp;

    }
    cout << "word sorted by length :";
    for(int i = 0; i < size; i++){
        cout << word[i] << "(" << word[i].length() << ")\n";
    }
    return 0;
}