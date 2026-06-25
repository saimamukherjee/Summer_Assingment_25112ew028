#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cout << "enter number of employees: ";
    cin >> n;
    int id[100];
    string names[100];
    double salaries[100];
    for(int i = 0; i < n; i++){
        cout << "employee " << i + 1<< "details: ";
        cout << "enter id: ";
        cin >> id[i];
        cout << "enter name: ";
        cin >> names[i];
        cout << "enter basic salary: ";
        cin >> salaries[i];
    }
    cout << "\n-----Salary Report-----" << endl;
    cout << "id\tname\t\tsalary" << endl;
    for(int i = 0; i < n; i++){
        cout << id[i] << "\t" << names[i] << "\t\t$" << salaries[i]  << endl;
    }
    return 0;
}
