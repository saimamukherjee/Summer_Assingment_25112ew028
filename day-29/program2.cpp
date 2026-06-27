#include <iostream>
using namespace std;
int main(){
    int arr[100];
    int size = 0;
    int choice, element, pos;
    while(true){
        cout << "\n----Array operation menu----" << endl;
        cout << "1. insert element\n2. display element \n3. search element\n4. exit" << endl;
        cout << "enter your choice: ";
        cin >> choice;
        switch(choice){
            case 1:
            if(size >= 100){
                cout << "array is full." << endl;
            }
            else{
                cout << "enter element to insert: ";
                cin >> element;
                arr[size++] = element;
                cout << "element inserted." << endl;
            }
            break;
            case 2:
            if(size == 0){
                cout << "array is empty." << endl;
            }
            else{
                cout << "array elements: ";
                for(int i = 0; i < size; i++){
                    cout << arr[i] << " ";
                }
                cout << endl;
            }
            break;
            case 3:
            cout << "enter element to search: ";
            cin >> element;
            pos = -1;
            for(int i = 0; i < size; i++){
                if(arr[i] == element){
                    pos = 1;
                    break;
                }
            }

            if(pos != -1){
                cout << "element fount at index" << pos << endl;
            }
            else{
                cout << "element not found." << endl;
            }
            break;
            case 4:
            cout << "exiting program... " << endl;
            return 0;
            default:
            cout << "invalid choice!" << endl;
        }
    }
}