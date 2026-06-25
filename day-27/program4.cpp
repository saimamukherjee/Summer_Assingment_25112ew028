#include <iostream>
#include <string>
using namespace std;
int main(){
    string name;
    int roll, math, sci, eng;
    cout << "enter name & roll no: ";
    cin >> name >> roll;
    cout << "enter marks for math, science, english: ";
    cin >> math >> sci >> eng;
    float total = math + sci + eng;
    float per = total / 3.0;
    cout << "\n------MARKSHEET------" << endl;
    cout << "name: " << name << "\troll: " << roll << endl;
    cout << "-------------------------------" << endl;
    cout << "maths:\t\t" << math << endl;
    cout << "science:\t" << math << endl;
    cout << "english:\t" << sci << endl;
    cout << "-------------------------" << endl;
    cout << "total:\t\t" << total << "/300" << endl;
    cout << "percentage:\t" << per << "%" << endl;
    cout << "result:\t\t" << (per >= 40 ? "pass" : "fail" ) << endl;
    return 0;
}