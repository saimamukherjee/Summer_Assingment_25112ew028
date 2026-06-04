# include <iostream>
using namespace std;
int main(){
    int num;
    cout << "enter the decimal number:";
    cin >> num;
    if(num == 0){
        cout << "Binary: 0" << endl;
        return 0;
    }
    string binary = "";
    while(num > 0){
        int remainder = num % 2;
        binary = to_string(remainder) + binary;
        num = num /2;
    }
    cout << "Binary: " << binary << endl;
    return 0;
}