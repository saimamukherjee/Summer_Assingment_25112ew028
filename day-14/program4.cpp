#include <iostream>
using namespace std;
int main(){
    int n;
    cout << " enter the number of elements :";
    cin >> n;
    int arr[100];
    cout << "enter " << n << " elements : ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "duplicate elements are :";
    bool found = false;
    for(int i = 0; i<n; i++){
        for(int j = i + 1; j< n; j++ ){
            if(arr[i] == arr[j]){
                cout << arr[i] << " ";
                found = true;
                break;
            }
        }
    }
    if(!found) cout << "none";
    return 0;
}