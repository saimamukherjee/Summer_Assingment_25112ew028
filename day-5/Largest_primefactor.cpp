# include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if( n <= 1){
        cout << " numbers less than or equal to 1 do not have prime factors";
        return 0;
    }
    while(n % 2 == 0){
        cout << 2 << " ";
        n = n/2;
    }
    for( int i = 3; i <= n*n; i = i+2){
        while(n%i == 0){
            cout << i << " ";
            n = n/2;
        }
    }
    if(n>2){
        cout << n << " ";

    }
    cout << endl;
    return 0;

}