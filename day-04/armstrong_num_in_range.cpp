# include <iostream>
using namespace std;
int main(){
    int lower , upper;
    cout << "enter the lower limit:" << endl;
    cin >> lower;
    cout << "enter the upper limit :" << endl;
    cin >> upper;
    cout << "armstrong numbers between " << lower << " and " << upper << " are : " << endl;
    for ( int i = lower; i<= upper; i++){
        if(i<=0){
            continue;

        }
        int temp=i;
        int digits=0;
        int sum=0;
        while(temp>0){
            temp = temp/10;
            digits++;
        }
        temp = i;
        while(temp >0){
            int r = temp%10;
            int power = 1;
            for(int j = 0;j <digits; j++){
                power = power*r;
            }
            sum = sum + power;
            temp = temp/10;
        }
        if(sum == i){
            cout << i << " ";
        }
    }
    cout << endl;
    return  0;  
}


