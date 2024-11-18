#include <iostream>
#include <string>

using namespace std;

int main() {

    string userCofee;
    int cofeeQuality;

    cout << "What would you like to order in cofeee? \n";
    getline(cin, userCofee);

    cout << "How many cups of " <<userCofee <<"would you like to have ?";
    cin >> cofeeQuality;

    cout << userCofee;
    cout << cofeeQuality;

    return 0;

}