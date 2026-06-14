#include <iostream>
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 5};
    int n = 5;
    int totalelements = sizeof(arr)/sizeof(arr[0]);
    int total = 0;
    int array = 0;
    for(int i = 1 ; i<=n; i++){
        total ^= i;
    }
    for(int i = 0; i < totalelements; i++){
        array ^= arr[i];
    }
    int missingNumber = total ^ array;
    cout << "the missing number is :" << missingNumber << endl;
    return 0;
}
