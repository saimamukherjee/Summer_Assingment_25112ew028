#include <iostream>
using namespace std;
int main(){
    int arr[] = { 64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "original array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    bool swapped;
    for(int i =0; i < n-1; i++){
        swapped = false;
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        if(!swapped){
            break;
        }
    }
    cout << "sorted array ";
    for(int i =0; i < n; i++){
        cout << arr[i] << " ";
    } 
    cout << endl;
    return 0;
}