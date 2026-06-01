# include <iostream>
using namespace std;
int main(){
    int num, sum = 0 , r , temp ;
    cout << "enter a numer:";
    cin >> num;
    temp = num;
    while(temp !=0){
        r = temp %10;
        sum = r*r*r + sum;
        temp = temp /10;

    }
    if(sum == num){
        cout << num << " is an armstrong number";
    }
    else{
        cout << num << " is not an armstromg number";
    
    }
    return 0;

}
