#include <iostream>

using namespace std;

int main() {

    int cups;
    double pricePerCup, totalPrice, discountedPrices;

    cout << "Enter the number of tea cups";
    cin >> cups;
    cout << "Enter the price per cup";
    cin >> pricePerCup;

    totalPrice = cups * pricePerCup;

    // apply 5% discount if total price is above 100.
        if (totalPrice > 100){
            
            discountedPrices = totalPrice - (totalPrice * 0.05);
            cout << "Discounted prices is" << discountedPrices << endl;

        } else
        {
            cout << "Total Price is " << totalPrice << endl;
        }
    
    return 0;
}