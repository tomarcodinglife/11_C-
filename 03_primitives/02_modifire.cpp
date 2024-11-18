#include <iostream>

using namespace std;

int main () {

    signed myCofeeOrder = -10; // signed manes you can store positive with negative value also
    unsigned halfCofeePrice = 60; // unsigned means not accept negative value like -10, -50, -100 etc...
    float largeCofeeStorage = 1000000000; // large value not working at this condition 
    double maxCofeeStorage = 1000000000; // large value not working at this condition
    long myMaxCofeeCapicity = 100000000; // for large value store in variable you can use long data types keywords.
    float cofeePrice = 99.99;   // 99 
    int roundedCofeePrice = (int) cofeePrice;
    short shortValue = 99.55;

    cout << myCofeeOrder << endl;
    cout << roundedCofeePrice << endl;
    cout << cofeePrice << endl;
    cout << largeCofeeStorage << endl;
    cout << maxCofeeStorage << endl;
    cout << myMaxCofeeCapicity << endl;
    cout << shortValue << endl;


    return 0;
}   