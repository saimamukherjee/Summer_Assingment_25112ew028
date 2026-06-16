#include <iostream>
using namespace std ;
int main(){
    int arr[] = { 2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 23;
    int low = 0;
    int high = n -1;
    int resultIdx = -1;
    while(low <= high){
        int mid = low +(high - low)/2;
        if(arr[mid] == target){
            resultIdx = mid;
            break;
        }
        if(arr[mid] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
        
    }
    if(resultIdx != -1){
        cout << "element fount at index :" << resultIdx << endl;
    }
    else{
        cout  <<"element not found" ;
    }
    return 0 ;

}