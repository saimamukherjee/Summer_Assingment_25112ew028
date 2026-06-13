#include <iostream>
using namespace std;
int main(){
    int arr[] = {1, 5, 0, 9, 0, 4, 2};
    int size = sizeof(arr)/sizeof(arr[0]);
    int insert = 0;
    for(int i =0; i < size ; i++){
        if(arr[i] != 0){
            int temp = arr[insert];
            arr[insert] = arr[i];
            arr[i] = temp;
            insert++;
        }
    }
    cout << "result :";
    for(int i = 0; i < size ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

