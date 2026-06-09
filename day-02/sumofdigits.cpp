# include <iostream>
using namespace std;    
int main(){
    int n,d,s=0;
    cin >> n;
    while(n>0){
        d = n%10;
        s = s + d;
        n = n/10;

    }
    cout << " The sum of digit  is " << s << endl;
    return 0;

}