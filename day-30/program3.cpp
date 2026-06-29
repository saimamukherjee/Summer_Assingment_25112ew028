#include <iostream>
#include <string>

using namespace std;

struct Employee {
    int id;
    string name;
    string department;
    double salary;
};

int main() {
    const int MAX_EMPLOYEES = 100;
    Employee employees[MAX_EMPLOYEES];
    int employeeCount = 0;
    int choice;

    do {
        cout << "\n--- Employee Management System ---\n";
        cout << "1. Add Employee\n";
        cout << "2. Display All Employees\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            if (employeeCount < MAX_EMPLOYEES) {
                cout << "Enter Employee ID: ";
                cin >> employees[employeeCount].id;
                cin.ignore(); // Clear the input buffer

                cout << "Enter Name: ";
                getline(cin, employees[employeeCount].name);

                cout << "Enter Department: ";
                getline(cin, employees[employeeCount].department);

                cout << "Enter Salary: ";
                cin >> employees[employeeCount].salary;

                employeeCount++;
                cout << "Employee added successfully!\n";
            } else {
                cout << "Database full! Cannot add more employees.\n";
            }
        } 
        else if (choice == 2) {
            if (employeeCount == 0) {
                cout << "No records found.\n";
            } else {
                cout << "\n--- Employee List ---\n";
                for (int i = 0; i < employeeCount; i++) {
                    cout << "ID: " << employees[i].id 
                         << " | Name: " << employees[i].name 
                         << " | Dept: " << employees[i].department 
                         << " | Salary: $" << employees[i].salary << "\n";
                }
            }
        } 
        else if (choice == 3) {
            cout << "Exiting program. Goodbye!\n";
        } 
        else {
            cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 3);

    return 0;
}