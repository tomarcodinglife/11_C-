#include <iostream>

using namespace std;

int main() {

    bool isStudent;
    int cups;

    cout << "Are you a student (1 for yes and 0 for No)";
    cin >> isStudent;
    cout << "How man cups of tea have you purchased";
    cin >> cups;

    if (isStudent || cups > 15){
        cout << "You are eligible for discound"<<endl;
    } else{
        cout << "You are not eligible for discount"<<endl;
    }
    
    
    return 0 ;
}