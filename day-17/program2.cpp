#include <iostream>
using namespace std;
int main(){
    int n1, n2;
    cout << " enter size of first array:";
    cin >> n1;
    int arr1[n1];
    cout << "enter elements:";
    for(int i = 0; i< n1; i++){
        cin >> arr1[i];
    }
    cout << " enter size of second array:";
    cin >> n2;
    int arr2[n2];
    cout << "enter elements:";
    for(int i = 0; i< n2; i++){
        cin >> arr2[i];
    }
    cout << " union of the two arrays:";
    for(int i = 0; i < n1; i++){
        bool isDuplicate = false;
        for(int j = 0; j<i; j++){
            if(arr1[i] ==arr1[j]){
                isDuplicate = true;
                break;
            }
        }
        if(!isDuplicate){
            cout << arr1[i] << " ";
        }
    }
    for(int i = 0; i <n2; i++){
        bool exists = false;
        for(int j = 0; j <n1 ; j++){
            if(arr2[i] == arr1[j]){
                exists = true;
                break ;
            }
        }
        if(!exists){
            for(int j = 0; j< i; j++){
                if(arr2[i] == arr2[j]){
                    exists = true;
                    break;
                }
            }
        }
        if(!exists){
            cout << arr2[i] << " ";
        }
    }
    return 0;
}