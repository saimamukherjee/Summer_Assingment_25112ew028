#include <iostream>
using namespace std;
bool isprime(int num){
    if(num <=1){
        return false;
    }
    for(int i =2; i<= num/2; i++){
        if( num % i ==0){
            return false;
        }
    }
    return true;
}
int main(){
    int num;
    cout << "enter the number:";
    cin  >> num;
    if(isprime(num)){
        cout << num << " is a prime number." << endl;
    }
    else{
        cout << num << " is not a prime number." << endl;
    }
    return 0;
}

