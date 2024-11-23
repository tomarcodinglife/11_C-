#include <iostream>

using namespace std;

int main() {

    // if-else conditional

    int hour;

    cout << "Enter the current hour";
    cin >> hour;

    if (hour >= 8 && hour<= 18)
    {
       cout<<" Tea shop is OPEN! "<<endl;
    }
    else
    {
        cout<<"Tea shop is CLOSED" << endl;
    }
    


    return 0;
}