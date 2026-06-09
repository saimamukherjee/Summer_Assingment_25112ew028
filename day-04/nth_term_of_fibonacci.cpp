# include <iostream>
using namespace std;
int main(){
    int a,b,c,n;
    cin>> n;
    a=0;
    b=1;
    for(int i=2; i<n; i++){
        c= a+b;
        a=b;
        b=c;
    }
    cout << " The " << n << "th tern of the fibonacci series  is " << c << endl;
    return 0;

}