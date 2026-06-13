#include <iostream>
using namespace std;
int main(){
    int arr[] = { 10, 20, 30, 40};
    int n = sizeof(arr)/sizeof(arr[0]);
    if(n > 1){
        int first = arr[0];
        for(int i = 0; i<n-1; i++){
            arr[i] = arr[i+1];
        }
        arr[n -1] = first;
    }
    cout << "array after left rotation :";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}