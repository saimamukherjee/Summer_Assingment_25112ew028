#include <iostream>
#include <string>
using namespace std;
struct Employee {
    int id;
    string name;
    string department;
    double salary;
};
int main(){
    Employee employees[100];
    int count = 0;
    int choice;
   while(true){
    cout << "\n1. Add Employee\n2. Display all\3. Exit\nenter choice: ";
    cin >> choice;
    if(choice == 1){
        if(count < 100){
            cout<< "enter id: ";
            cin >> employees[count].id;
            cout << "enter name: "; 
            cin.ignore(); 
            getline(cin, employees[count].name);
            cout << "enter salary :"; cin >> employees[count].salary;
            count++;
        }
        else{
            cout << "system full!\n";
        }
    }
    else if(choice == 2){
        cout << "-----Employee list-----";
        for(int i = 0; i < count ; i++){
            cout << "id: " << employees[i].id << "| name: " << employees[i].name << "| salary: $ " << employees[i].salary << endl;
        }
    }
    else if(choice == 3){
        break;
    }
    else{
        cout << "invalid choice!\n";
    }
    }
    return 0;
}