#include <iostream>
using namespace std;
int main(){
    int start, end;
    cin >> start >> end;
    for (int i = start;i <= end ; i ++){
        bool isprime = true;
        for (int j = 2; j*j<= i; j++){
            if (i%j == 0){
                isprime = false;
                break;

            }
        }
        if(isprime){
            cout << i << ""<< endl;

        }

    }
    return 0;

}

    

