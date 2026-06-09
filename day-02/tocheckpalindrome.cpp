# include <iostream>
using namespace std;
int main(){
    int n,d,rev=0,temp;
    cin >> n;
    temp = n;
    while(n>0){
        d = n%10;
        rev = rev*10 + d;
        n = n/10;

    }
    if(rev == temp){
        cout << " the number is palindrome " << endl;
    }
    else{
        cout << " the number is not palindrome " << endl;
    }
    return 0;
}