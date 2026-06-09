// day-2 uploaded
# include <iostream>
using namespace std;
int main(){
    int n , d , p =1;
    cin >> n;
    while(n>0){
        d = n%10;
        p = p*d;
        n = n/10;

    }
    cout << " The product of digit  is " << p << endl;
    return 0;
}