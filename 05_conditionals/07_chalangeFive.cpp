#include <iostream>

using namespace std;

int main(){

    int cups;
    double pricePerCups = 2.5, totalPrice, discount;

    cout << "Enter the number of tea cups";
    cin >> cups;
    if (cups > 20){
        discount = 0.20;
    }
    else if (cups >= 10 && cups >= 20){
        discount = 0.10;
    }
    else{
       discount = 0;
    }
    
    totalPrice = cups * pricePerCups;
    // totalPrice = totalPrice - (totalPrice * discount);
    totalPrice -= totalPrice*discount;

    cout << "You are order"<< cups << "So you get" << discount<<endl;
    cout << "price per cup is" << pricePerCups << "doller"<<endl;
    cout << "total discount price is"<< discount << "doller" << endl;
    cout << "after discount please you pay total price" << totalPrice << "doller" <<endl;


    return 0;
}