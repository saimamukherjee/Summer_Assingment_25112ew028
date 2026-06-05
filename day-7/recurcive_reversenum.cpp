# include <iostream>
using namespace std;
int reversedNum = 0;
void reverseNum(int n){
    if(n == 0){
        return;
    }
    reversedNum = (reversedNum * 10) + (n % 10);
    reverseNum(n / 10);
}
int main(){
    int num;
    cout <<"enter the number : ";
    cin >> num;
    reverseNum(num);
    cout << "reversed:" << reversedNum << endl;
    return 0;
}