# include <iostream>
using namespace std;
int calculateFactorial(int n){
    if(n <= 1){
        return 1;
    }
    return n * calculateFactorial(n-1);
}
int main(){
    int userInput;
    cout << "enter a positive interger:";
    cin >> userInput;
    if(userInput < 0){
        cout << "factorial is not definened for negative numbers." << endl;
    }
    else{
        cout << "factorial of "<< userInput << " is " << calculateFactorial(userInput) << endl;
    }
    return 0;


}