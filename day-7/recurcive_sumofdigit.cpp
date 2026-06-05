# include <iostream>
using namespace std;
int sumOfDigit(int n){
    if(n == 0){
        return 0;
    }
    return(n%10) + sumOfDigit(n / 10);
}
int main(){
    int num;
    cout << "enter the number :";
    cin >> num;
    cout << "sum of the digit : " << num << " is " << sumOfDigit(num) << endl;
    return 0;
}