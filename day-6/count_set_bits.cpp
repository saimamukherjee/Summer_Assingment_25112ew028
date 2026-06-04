# include <iostream>
using namespace std;
int main(){
    int num;
    cout << "enter an integer:";
    cin >> num;
    int originalNum = num;
    int count = 0;
    while(num > 0){
        if(num%2 == 1){
            count++;
        }
        num = num / 2;
    }
    cout << "the number of set bits (1s) in " << originalNum << " is: " << count << endl;
    return 0;
}
