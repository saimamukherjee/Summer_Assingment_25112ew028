# include <iostream>
using namespace std;
int main(){
    long long binaryNum;
    cout << "enter a binary number:";
    cin >> binaryNum;
    int decimalVal = 0;
    int base = 1;
    while(binaryNum > 0){
        int lastDigit = binaryNum % 10;
        binaryNum = binaryNum / 10;
        decimalVal += lastDigit * base;
        base = base * 2;
    }
    cout << "decimal value: " << decimalVal << endl;
    return 0;
}
