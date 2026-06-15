#include <iostream>
using namespace std;
int main(){
    int arr1[] = { 1, 5, 10, 20, 40, 80};
    int arr2[] = {6, 7, 20, 80, 100};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    cout << "common eelements:" ;
    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n2; j++){
            if(arr1[i] == arr2[j]){
                cout << arr1[i] << " ";
                break;
            }
        }
    }
    return 0;
}