#include <iostream>
#include <string>

using namespace std;

int main() {
    const int MAX_STUDENTS = 100;
    string names[MAX_STUDENTS];
    int rollNumbers[MAX_STUDENTS];
    float marks[MAX_STUDENTS];
    int studentCount = 0;
    int choice;

    while (true) {
        cout << "\n--- Student Record System ---" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Display All Records" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            if (studentCount < MAX_STUDENTS) {
                cout << "Enter Name: ";
                cin.ignore(); // Clear buffer
                getline(cin, names[studentCount]);
                cout << "Enter Roll Number: ";
                cin >> rollNumbers[studentCount];
                cout << "Enter Marks: ";
                cin >> marks[studentCount];
                
                studentCount++;
                cout << "Record added successfully!" << endl;
            } else {
                cout << "Database is full!" << endl;
            }
        } 
        else if (choice == 2) {
            if (studentCount == 0) {
                cout << "No records found." << endl;
            } else {
                cout << "\n--- Student List ---" << endl;
                for (int i = 0; i < studentCount; i++) {
                    cout << "Roll: " << rollNumbers[i] 
                         << " | Name: " << names[i] 
                         << " | Marks: " << marks[i] << endl;
                }
            }
        } 
        else if (choice == 3) {
            cout << "Exiting program..." << endl;
            break;
        } 
        else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}