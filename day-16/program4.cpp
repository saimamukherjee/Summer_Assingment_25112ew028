#include <iostream>
using namespace std;
int main(){
    int arr[]= {10, 20, 10, 30, 20, 40, 50, 40};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int newSize = 0;
    for(int i = 0; i < n ; i++){
        bool isDuplicate = false;
        for(int j = 0; j < newSize ; j++){
            if(arr[i] == arr[j]){
                isDuplicate = true ;
                break;
            }
        }
        if(!isDuplicate){
            arr[newSize] = arr[i];
            newSize++;
        }
    }
    cout << "array after removing duplicates :";
    for(int i = 0; i < newSize ; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}
