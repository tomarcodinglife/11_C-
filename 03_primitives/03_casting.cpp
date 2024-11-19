#include <iostream>

using namespace std;

int main () {

    float cofeePrice = 99.99; 
    int roundeOffCofeePrice = (int) cofeePrice; 
    int cofeeQuantity = 5;

    int roundedTotalPrice = cofeePrice * cofeeQuantity; 
    double totalPrice = cofeePrice * cofeeQuantity;
    float myTotalPrice = cofeePrice * cofeeQuantity;

    cout << cofeePrice << endl;
    cout << roundeOffCofeePrice << endl; // 99
    cout << cofeeQuantity << endl; // 5

    cout << roundedTotalPrice << endl; // 499
    cout << totalPrice << endl; // 499.95
    cout << myTotalPrice << endl;  // 499.95

    return 0;
}