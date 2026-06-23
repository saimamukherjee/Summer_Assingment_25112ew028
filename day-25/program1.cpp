#include <iostream>
using namespace std;
int  main(){
    int arr1[100] = {1, 3, 5, 7};
    int n1 = 4;
    int arr2[100] = {2, 4, 6, 8};
    int n2 = 4;
    int result[n1 + n2];
    int i = 0 , j = 0 , k = 0;
    while(i < n1 && j < n2){
        if(arr1[i] < arr2[j]){
            result[k] = arr1[i];
            i++;
        }
        else{
            result[k] = arr2[j];
            j++;
        }
        k++;
    
    }
    while(i < n1){
        result[k] = arr1[i];
        i++;
        k++;
    }
    while(j < n2){
        result[k] = arr2[j];
        j++;
        k++;
    }
    cout << "merged array :";
    for(int index = 0; index < n1 + n2; index++){
        cout << result[index] << " ";
    }
    cout << endl;
    return 0;
}