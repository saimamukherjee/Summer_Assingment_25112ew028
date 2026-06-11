#include <iostream>
using namespace std;
int main(){
    int n;
    cout << " enter the number of elements:";
    cin >> n;
    int arr[100]; // Assuming a maximum of 100 numbers
    cout << "enter" << n << " numbers: " << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << " the aray elements are : " << endl;
    for(int i = 0; i<n ; i++){
        cout << arr[i] << " ";
    }
    return 0;
}