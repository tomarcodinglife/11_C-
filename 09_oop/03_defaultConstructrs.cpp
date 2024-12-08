#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Account_Opening_Form{
    public:    
        string customerFirstName;
        string customerLastName;
        string customerFatherName;
        string customerMotherName;
        string customerAddress;
        string customerEmail;
        int accountNumber;
        long long mobileNumber;
        float accountBalance; 
        string gender;
        vector<float> previousFiveDaysBalance;

        //default constructor
        Account_Opening_Form(){
            customerFirstName = "First Name";
            customerLastName = "Last Name";
            accountNumber = 000000000000000;
            mobileNumber = 9999999999;
            accountBalance = 0.00;
            cout << "Constructor Account Opening Form "<< endl;
        }

        void displayDetails(){
                cout<< "Customer Name: " << customerFirstName << " " << customerLastName <<endl;
                cout<< "Father's Name: "<< customerFatherName <<endl;
                cout<< "Mother's Name: "<< customerMotherName <<endl;
                cout<< "Address:  " << customerAddress <<endl;
                cout<< "Email ID: "<< customerEmail <<endl;
                cout <<"Account Number: " << accountNumber <<endl;
                cout<< "Mobile Number: "<< mobileNumber<<endl;
                cout<< "Current Balance " << accountBalance<< endl;
                cout<< "Gender: "<< (gender= "F" || "f" || "Female" || "female" ? "Female" : "Male")<<endl;
                cout << "Previous Five Days Balance is ";
                    for(float balance : previousFiveDaysBalance){
                        cout << balance << "";
                    }
                    cout<<endl;
            }
};

int main(){
    Account_Opening_Form account_Opening_Form;
    account_Opening_Form.displayDetails();


    return 0;
}