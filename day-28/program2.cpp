#include <iostream>
#include <string>
using namespace std;
class BankAccount{
    private:
    string accountholder;
    double balance;
    public:
    BankAccount(string name, double initialbalance){
        accountholder = name;
        balance = initialbalance;
    }
    void withdraw(double amount){
        if(amount > balance){
            cout <<"insufficient funds!" << endl;
        }
        else if(amount > 0){
            balance -= amount ;
            cout << "successfully withdrew $ " << amount << endl;
        }
    }
    void displaybalance(){
        cout << "account  holdere :" << accountholder << endl;
        cout << "current balance: $" << balance << endl;
    }
};
int main(){
    BankAccount myAccount("John Doe", 500.0);
    myAccount.displaybalance();
    myAccount.withdraw(150.0);
    myAccount.displaybalance();
}