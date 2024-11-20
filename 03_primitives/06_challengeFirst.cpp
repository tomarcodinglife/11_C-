#include  <iostream>

using namespace std;

int main () {

    string type_of_Tea;
    float basePrice;
    char rating;


    cout << "Enter the type of tea";
    getline(cin, type_of_Tea);

    cout << "Enter the price per kilogram";
    cin >> basePrice;

    cout << "Enter the rating of the tea (5, 4, 3, 2, 1)";
    cin >> rating;

    float newPrice = basePrice * 1.10f;

    int roundPrice = static_cast <int> (newPrice);

    cout << "\n --- Tea Information ---" << endl;
    cout << "Type of Tea \t \t \t : "<< type_of_Tea<<endl;
    cout << "Base price of \t \t \t : " << basePrice <<endl;
    cout << "New Price (after 10 percent increase) \t \t \t $: "<< newPrice<<endl;
    cout << "Rounded price is \t \t \t :" << roundPrice << endl;
    cout << "Customer Rating is \t \t \t :" << rating << endl;
}
