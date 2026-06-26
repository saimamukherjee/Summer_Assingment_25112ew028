#include <iostream>
#include <string>
using namespace std;
int main(){
    int id[100];
    string titles[100];
    string authors[100];
    int bookcount = 0;
    int choice;
    while(true){
        cout << "\n------Libraray Management System--------\n";
        cout << "1. add books\n";
        cout << "2. displya all books\n";
        cout << "3. exit\n";
        cout << "enter choice: ";
        cin >> choice;
        if(choice == 1){
            if(bookcount<100){
                cout << "enter book id: ";
                cin >> id[bookcount];
                cin.ignore();
                cout << "enter title: ";
                getline(cin, titles[bookcount]);
                cout << "enter author: ";
                getline(cin, authors[bookcount]);
                bookcount++;
                cout << "book added successfully!\n";
            }
            else{
                cout << "library is full!";
            }
        }
        else if(choice == 2){
            if(bookcount == 0){
                cout << "no book in library.";
            }
            else{
                cout << "\nid\ttitlt\tauthor\n";
                for(int i = 0; i < bookcount; i++){
                    cout << id[i] << "\t" << titles[i] << "\t\t" << authors[i] << endl;
                }
            }
        }
        else if(choice == 3){
            break;
        }
        else {
            cout << "invalid choice!";
        }
    }
    return 0;
}