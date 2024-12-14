#include <iostream>
#include <string>

using namespace std;

class BankAccount{
    private:
        string accountNumber;
        string accountHolder;
        double balance;
    public : 
        BankAccount(string accNum, double initialBalance, string acHolder){
            accountNumber = accNum;
            balance = initialBalance;
            accountHolder = acHolder;
        }

        // getter
        double getBalance() const {
            return balance;
        }

        // method for deposit money 
        void deposit(double amount){
            if(amount > 0){
                balance += amount;
                cout<<"Your Amount "<< amount << " Deposited."<<endl;
            }else{
                cout << "Invalid Deposit Amount"<<endl;
            }
        }

        void withdraw(double amount){
            if(amount > 0 && amount <= balance){
                balance -= amount;
                cout << "Your Amount " << amount << " Withdrawn." << endl;
            }else{
                cout << "Invalid Withdraw Amount" << endl;
            }
        }

        void displayAccountDetails(){
            cout<<"Account Number : "<< accountNumber <<endl;
            cout<<"Account Holder Name : "<< accountHolder <<endl;
            cout<<"Account Balance : "<< balance <<endl;
        }
};

int main(){
    BankAccount sujitAccount("3565525255", 255000, "Sujit Tomar");
    sujitAccount.deposit(212000);
    cout << "Current Balance : " << sujitAccount.getBalance() <<endl;
    sujitAccount.withdraw(151500);

    // Display the account details
    sujitAccount.displayAccountDetails();
    return 0;
}