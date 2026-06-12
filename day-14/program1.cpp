#include <iostream>
using namespace std;
int main(){
    int size;
    cout << " enter the number of elements :";
    cin >> size;
    int arr[100];
    cout << " enter " << size << " elements :";
    for(int i = 0; i< size; i++){
        cin  >> arr[i];
    }
    int target;
    cout << " enter the element to search :";
    cin >> target;
    int indexFound = -1;
    for(int i = 0; i < size ; i++){
        if(arr[i] == target){
            indexFound = i;
            break;
        }
    }
    if(indexFound != -1){
        cout << " elements found at index : " << indexFound << endl;
    } else {
        cout << " elements not found in the array " << endl;
    }
    return 0;

}
