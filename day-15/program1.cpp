#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "enter number of elements: ";
    cin >> n;
    int arr[100];
    cout << "enter " << n << " elements :";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int start = 0;
    int end = n -1;
    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    cout << "reversed array :";
    for(int i = 0; i< n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}