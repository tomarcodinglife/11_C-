#include <iostream> 
#include <string>

using namespace std;

int main() {

    // if statement
    
    string teaOrder;

    cout << "Enter your Tea Order";
    getline(cin, teaOrder);

    if (teaOrder == "Green Tea")
    {
        cout << "You have order Green Tea"<<endl;
    }
    

    return 0;
}