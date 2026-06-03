# include <iostream>
using namespace std;
int main(){
    int num;
    cout << "enter a number:";
    cin >> num;
    int temp = num;
    int totalsum = 0;
    while(temp>0){
        int digit = temp % 10;
        int factorial = 1;
        for(int i = 1; i <=digit; i++){
            factorial = factorial * i;
        }
        totalsum = totalsum + factorial;
        temp = temp / 10;
    }
    if(totalsum == num && num > 0){
        cout << num << "is a strong number" << endl;
    }
    else{
        cout << num << "is not a strong number" << endl;
    }
    return 0;
}