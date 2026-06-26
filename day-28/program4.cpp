#include <iostream>
#include <string>
using namespace std;
int main(){
    string itemname[100];
    int itemquantities[100];
    double itemprice[100];
    int itemcount = 0;
    int choice;
    while(true){
        cout << "\n------Inventory Management system-------\n";
        cout << "1. add new items\n";
        cout << "2. view all items\n";
        cout << "3. search for an item\n";
        cout << "4. exit\n";
        cout << "enter your choice:";
        cin >> choice;
        if(choice == 1){
            if(itemcount < 100){
                cout << "enter item name: ";
                cin.ignore();
                getline(cin, itemname[itemcount]);
                cout << "enter the quantity:";
                cin >> itemquantities[itemcount];
                cout << "enter price:";
                cin >> itemprice[itemcount];
                itemcount++;
                cout << "item added successfully!";
            }
            else{
                cout << "inventory if full\n";
            }
        }
        else if(choice == 2){
            if(itemcount ==0){
                cout << "inventory is empty.\n";
            }
            else{
                cout << "\n----current invedntory----\n";
                for(int i = 0; i < itemcount; i++){
                    cout << "id:" << i+1 << "|name: " << itemname[i] << "|qyt:" << itemquantities[i] << "|price : $" << itemprice[i] << endl;
                }
            }
        }
        else if(choice == 3){
            string searchname;
            bool found = false;
            cout<< "enter item name to search: ";
            cin.ignore();
            getline(cin, searchname);
            for(int i = 0; i < itemcount; i++){
                if(itemname[i] == searchname){
                    cout << "item found: name: " << itemname[i] << "| price: $" << itemprice[i] << endl;
                    found = true;
                    break;
                }
            }
            if(!found){
                cout << "item not found.\n";
            }
        else if(choice == 4){
            cout << "exiting program.....\n";
            break;
        }
        else{
            cout << "invalid choice.Try again.";
        }
        }
}
    return 0;
    
}