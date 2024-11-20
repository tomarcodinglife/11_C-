#include <iostream>

using namespace std;

int main () {
    string favoriteTea;
    int teaRequiredCup;

    cout << "What is your favorite Tea please tell me";
    getline(cin, favoriteTea);

    cout << "How many cup required";
    cin >> teaRequiredCup;

    cout << "----- Information -----"<<endl;
    cout << "User Favorite Tea is \t \t \t : " << favoriteTea<<endl;
    cout << "user required cup of tea is \t \t \t : " << teaRequiredCup << endl;



    return 0;
}