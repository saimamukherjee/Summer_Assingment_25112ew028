#include <iostream>
#include <string>

using namespace std;

struct Book {
    int id;
    string title;
    string author;
};

int main() {
    // Maximum capacity set to 100 books
    Book library[100]; 
    int totalBooks = 0;
    int choice;

    while (true) {
        cout << "\n--- Mini Library System ---" << endl;
        cout << "1. Add Book\n2. Display All Books\n3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            if (totalBooks >= 100) {
                cout << "Library is full!" << endl;
            } else {
                cout << "Enter Book ID: ";
                cin >> library[totalBooks].id;
                cin.ignore(); // Clear newline character from buffer

                cout << "Enter Title: ";
                getline(cin, library[totalBooks].title);

                cout << "Enter Author: ";
                getline(cin, library[totalBooks].author);

                totalBooks++;
                cout << "Book added successfully!" << endl;
            }
        } 
        else if (choice == 2) {
            if (totalBooks == 0) {
                cout << "Library is empty." << endl;
            } else {
                cout << "\n--- List of Books ---" << endl;
                for (int i = 0; i < totalBooks; i++) {
                    cout << "ID: " << library[i].id 
                         << " | Title: " << library[i].title 
                         << " | Author: " << library[i].author << endl;
                }
            }
        } 
        else if (choice == 3) {
            cout << "Exiting program..." << endl;
            break;
        } 
        else {
            cout << "Invalid choice! Please try again." << endl;
        }
    }

    return 0;
}