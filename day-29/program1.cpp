#include <iostream>
using namespace std;
int main(){
    int choice;
    double num1, num2;
    do{
        cout << "\n----claculator menu----" << endl;
        cout << "1. addition\n2. substraction\n3. multiplication\n4. division\n 5. exit" << endl;
        cout << "enter your choice: ";
        cin >> choice;
        if(choice >= 1 && choice <= 4){
            cout << "enter two numbers: ";
            cin >> num1 >> num2;
        }
        switch (choice){
            case 1:
            cout << "result: " << num1 + num2 << endl;
            break;
            case 2: 
            cout << "result: " << num1 - num2 << endl;
            break;
            case 3:
            cout << "result: " << num1 * num2 << endl;
            break;
            case 4:
            if(num2 != 0){
                cout << "result: " << num1 / num2 << endl;
            }
            else{
                cout << "error : division by zero!" << endl;
            }
            break;
            case 5:
            cout << "exiting...." << endl;
            break;
            default:
            cout << "Invalid choice! please try again." << endl;
        }
    }
    while(choice != 5);
    return 0;    
    
}