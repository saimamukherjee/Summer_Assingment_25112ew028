# include <iostream>
using namespace std;
int main(){
    int n , a , b,c;
    cin >> n;
    a=0;
    b= 1;
    for(int i= 1; i<=n; i++){
        cout <<a << " ";
        c = a+b;
        a=b;
        b=c;

    }
    cout <<endl;
    return 0;

}
