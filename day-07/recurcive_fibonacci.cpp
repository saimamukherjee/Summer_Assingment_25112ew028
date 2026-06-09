# include <iostream>
using namespace std;
int calculateFibonacci(int n){
    if(n <= 1){
        return n;
    }
    return calculateFibonacci(n-1) + calculateFibonacci(n-2);
}
int main(){
    int numTerms;
    cout << "entr a number:";
    cin >> numTerms;
    if(numTerms <= 0){
        cout << "please enter a positive number ";
    }
    else{
        cout << "fibonacci series upto " << numTerms << "terms :" << endl;
        for( int i = 0; i < numTerms; i++){
            cout << calculateFibonacci(i) << " ";
        }
        cout << endl;
    }
    return 0;
}