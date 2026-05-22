# include <iostream>
using namespace std;
int main(){
    int n,s=0;
    cin >> n;
    while(n>0){
        n = n/10;
        s++;

    }
    cout << " The number of digit  is " << s << endl;
    return 0;

}