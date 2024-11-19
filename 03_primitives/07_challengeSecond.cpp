#include <iostream>

using namespace std;

int main () {
    string userRequiredCofee; 
    float cofeePrice;
    int incrementPrice = 10;
    int finalIncrementPrice = cofeePrice * incrementPrice / 100;
    int finalCofeePrice = cofeePrice + finalIncrementPrice;
    

    cout<< "What you like in cofee"<<endl;
    getline(cin, userRequiredCofee);

    cout<< "How much price of \t" << userRequiredCofee << "\t please tell me";
    cin >> cofeePrice;

    cout << userRequiredCofee;
    cout << finalCofeePrice << "Price" ;


    return 0;
}