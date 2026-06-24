#include <iostream>
using namespace std;
int main(){
    double balance = 500.0;
    int choice;
    double amount;
    do{
        cout << "---ATM SIMULATOR---"<< endl;
        cout << "1. check balance\n2. deposit\n3. withdraw\n4. exit" << endl;
        cout << "enter choice: ";
        cin >> choice;
        switch(choice){
            case 1:
            cout << "current balance : $" << balance << endl;
            break;
            case 2:
            cout << "enter deposit amount :";
            cin >> amount;
            balance += amount;
            cout << "updated balance : $" << balance << endl;
            break;
            case 3:
            cout << "enter withdrawal amount :";
            cin >> amount;
            if(amount > balance){
                cout << "erroe : Insufficient balance>" << endl;
            }
            else{
                balance -= amount;
                cout << "withdrawal successful. remaining balance : $" << balance << endl;
            }
            break;
            case 4:
            cout << "exit"<< endl;
            break;
            default:
            cout << "invalid choice" << endl;

        }
    }while(choice != 4);
    return 0;
}
