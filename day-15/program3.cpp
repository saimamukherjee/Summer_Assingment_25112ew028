#include <iostream>
using  namespace std;
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int k =1;
    k = k % n;
    for(int i = 0; i < k ; i++){
        int last = arr[n-1];
        for(int j = n - 1; j > 0 ; j--){
            arr[j] = arr[j- 1];
        }
        arr[0] = last;
    }
    for(int i = 0; i <n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}