#include <iostream>
using namespace std;
int main(){
    int arr[] = {12, 3, 22, 0, 1, 14};
    int n = 6;
    if( n < 2){
        cout << "array must contain at least 2 elements";
        return 0;
    }
    int largest = arr[0];
    int secondLArgest = -1;
    for(int i = 1; i < n; i++){
        if(arr[i] > largest){
            secondLArgest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLArgest && arr[i] != largest){
            secondLArgest = arr[i];
        }
    }
    if(secondLArgest == -1){
        cout << " No distinct second largest element foound " << endl;
    }
    else{
        cout << "the second largest elements is: " << secondLArgest << endl;
    }
    return 0;

}