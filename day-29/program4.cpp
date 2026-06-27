#include <iostream>
using namespace std;
int main(){
    int ids[100];
    string names[100];
    int quantities[100];
    double prices[100];
    
    int current_count = 0;
    int choice;

    do {
        cout << "\n1. Add Product\n2. View Inventory\n3. Update Stock\n4. Exit\nChoice: ";
        cin >> choice;

        if (choice == 1) {
            if (current_count >= 100) {
                cout << "Inventory is full!\n";
            } else {
                cout << "Enter Product ID: "; 
                cin >> ids[current_count];
                
                cout << "Enter Name: "; 
                cin.ignore(); 
                getline(cin, names[current_count]);
                
                cout << "Enter Quantity: "; 
                cin >> quantities[current_count];
                
                cout << "Enter Price: "; 
                cin >> prices[current_count];

                current_count++;
                cout << "Product added successfully!\n";
            }
        } 
        else if (choice == 2) {
            if (current_count == 0) {
                cout << "\nInventory is empty.\n";
            } else {
                cout << "\n--- Current Inventory ---\n";
                for (int i = 0; i < current_count; i++) {
                    cout << "ID: " << ids[i] 
                         << " | Name: " << names[i] 
                         << " | Qty: " << quantities[i] 
                         << " | Price: $" << prices[i] << endl;
                }
            }
        } 
        else if (choice == 3) {
            int search_id;
            bool found = false;
            cout << "Enter Product ID to update: "; 
            cin >> search_id;

            for (int i = 0; i < current_count; i++) {
                if (ids[i] == search_id) {
                    cout << "Enter new quantity: "; 
                    cin >> quantities[i];
                    cout << "Stock updated successfully.\n";
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "Product ID not found.\n";
            }
        }
    } while (choice != 4);

    return 0;
}