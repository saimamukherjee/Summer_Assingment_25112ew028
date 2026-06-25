#include <iostream>
#include <string>
using namespace std;
int main(){
    string names[3];
    int rollnumber[3];
    float marks[3];
    for(int i = 0 ; i < 3; i++){
        cout << "enter details for student " << i + 1 << ":" << endl;
        cout<< "names: " ;
        if(i == 0)cin.ignore();
        getline(cin, names[i]);
        cout << "roll number: ";
        cin >> rollnumber[i];
        cout << "marks: ";
        cin >> marks[i];
        cin. ignore();
        cout << endl;
    }
    cout << "---Student Records---"<< endl;
    for(int i = 0; i <3; i++){
        cout << "roll no: " << rollnumber[i] << ", name: " << names[i] << ", marks: " << marks[i] << endl;
    }
    return 0;
}