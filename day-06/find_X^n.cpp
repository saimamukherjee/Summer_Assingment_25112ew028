# include <iostream>
using namespace std;
int main(){
    int x;
    int n;
    cout << "enter the base (x):";
    cin >> x;
    cout << "enter the power (n):";
    cin >> n;
    int result = 1;
    while(n > 0){
        result = result * x;
        n = n-1;
    }
    cout << "result : " << result << endl;
    return 0;
}