#include <iostream>
using namespace std;
int main(){
    int n, target, count = 0;
    cout << "enter the number of elements :";
    cin >> n;
    int arr[100];
    cout << "enter " << n << " elements :";
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    cout << "enter the element to search :";
    cin >> target;
    for(int i = 0; i < n; i++){
        if(arr[i] == target){
            count++;
         }
    }
    cout << "frequency of " << target << " is : " << count << endl;
    return 0;
}