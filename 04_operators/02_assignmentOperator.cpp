#include <iostream>

using namespace std;

int main(){

    int teabags;

    cout << "Enter the number of tea bag you have : ";
    cin >> teabags;

    if (teabags < 10)
    {
        // teabags = teabags + 5;
        teabags += 5;
    }
    
     cout << " Now you have teabags" << teabags <<endl;

    return 0;
}