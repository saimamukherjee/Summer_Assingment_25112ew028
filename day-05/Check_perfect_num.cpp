# include <iostream>
using namespace std;
int main(){
    int num, sum=0;
    cout << "enter the numbr:";
    cin >> num;
    for(int i = 1; i<num; i++){
        if(num%i == 0){
            sum = sum + i;
        }
    }
    if(sum == num && num >0){
        cout << num << " is a pefect number"<< endl;
    }
    else{
        cout << num << "is not a perfect number"<< endl;
    }
    return 0;
}