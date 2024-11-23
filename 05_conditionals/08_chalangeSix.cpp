#include <iostream>

using namespace std;

int main() {

    // switch case
    int choice;
    double price;

    cout<< "Select you tea \n";
    cout << "01. Green Tea \n";
    cout << "02. Lemon Tea \n";
    cout << "03. Oolong Tea \n";
    cout << "Enter your choice in number";

    cin >> choice;

    switch (choice)
    {
    case 1:
        price = 2.0;
        cout << "Hy You are select Green Tea so green tea price is " << price << " doller"<< endl;
        break;
    case 2:
        price = 3.0;
        cout << "Hy You are select Lomon Tea so Lomon Tea price is " << price <<" doller" << endl;
        break;
    case 3:
        price = 4.0;
        cout << "Hy You are select Oolong Tea so Oolong Tea price is " << price <<" doller" << endl;
    default:
        cout << "Invalid Choice" << price << endl;
    }

    return 0;
}