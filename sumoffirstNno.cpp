# include <iostream>
using namespace std;
int main(){
    int n ;
    cin >> n;
    int sum = 0;
    for(int i = 1; i<=n; i++){
        sum = sum +i;
        if(i ==5){            
            break;             
        }

    }
    cout << "Sum = " << sum << endl;
    return 0;

}
