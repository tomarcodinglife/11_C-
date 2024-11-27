/*
    Lamda function is introduce for singal time use function Not use for many times. 
*/

#include <iostream>
using namespace std;

int main() {
    // lamda
    auto lamdaFunction = [](int cups){
        cout << "Preparing " << cups << " cups of tea" << endl;
    };
    lamdaFunction(5);
    return 0;
}