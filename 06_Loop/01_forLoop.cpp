#include <iostream>
#include <string>

using namespace std;

int main() {

    int teaCups;

    cout << "How much want to cup of tea ";
    cin >> teaCups;

    for (int i = 1; i <= teaCups; i++)
    {
        cout << "Brewing cup " << i << " of tea..."<< endl;
    }

    cout << "Thank You for order cup of tea" << endl;

    return 0;
}