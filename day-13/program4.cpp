#include <iostream>
using namespace std;
int main(){
    int n, evenCount = 0, oddCount = 0;
    cout << "enter the number of elements :";
    cin >> n;
    int arr[100];
    cout << "enter " << n << " elements:";
    for(int i = 0; i < n ; i++){
        cin >> arr[i];
    }
    for(int i = 0 ; i < n ; i++ ){
        if(arr[i] % 2 == 0){
            evenCount ++;
        }
        else{
            oddCount ++;
        }
    }
    cout << "total even elements: " << evenCount << endl;
    cout << "total odd element : " << oddCount << endl;
    return 0;
}
