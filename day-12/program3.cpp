#include <iostream>
using namespace std;
int printFibonacci(int n){
    int a = 0;
    int b = 1;
    for(int i =0; i<n; i++){
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
    return 0;
}
int main(){
    int terms;
    cout << "enter the number of terms: ";
    cin >> terms;
    cout << "Fibonacci series: ";
    printFibonacci(terms);
    return 0;
}