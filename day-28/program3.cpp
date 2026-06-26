#include <iostream>
#include <string>
using namespace std;
int main(){
    int seat[10] = {0};
    int choice , seatnum;
    while(true){
        cout << "\n-----TICKEt BOOKING SYSTEM-----\n";
        cout << "1. view seats\n";
        cout << "2. book a ticket\n";
        cout << "3. exit\n";
        cout << "enter choice: ";
        cin >> choice;
        if(choice == 1){
            cout << "seat (0=available, 1=booked):\n";
            for(int i = 0; i < 10; i++){
                cout << "seat " << i+1 << ": [" << seat[i] << "] ";
            }
            cout << endl;
        }
        else if(choice == 2){
            cout << "enter seat number (1-10):";
            cin >> seatnum;
            if(seatnum < 1 || seatnum > 10){
                cout << "invalid seat number!\n";
            }
            else if(seat[seatnum - 1] == 1){
                cout << "seat alresdy booked!\n";
            }
            else {
                seat[seatnum - 1] = 1;
                cout << "booking successful !\n";
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