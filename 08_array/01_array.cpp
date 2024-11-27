#include <iostream>
#include <string>
using namespace std;

int main(){

    int temprature[100] = {50, 40, 38, 25, 34, 30};

    cout << " temprature ";

    for (int i=0 ; i <= 5; i++){
        cout << temprature[i] << " degree C \n";
    }
    
    return 0;
}