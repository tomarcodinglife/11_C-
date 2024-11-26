
/*
returnType  functionName(parameter){
    function Body
}

*/
// void means empty return
// Function Overloading means - same function name declare in multpile times with different data type or argument

#include <iostream>
#include <string>
using namespace std;


int checkTemperature(int temprature) {
     
     return temprature;
}

// Only Function Declaration here
void serveChai(int cups);

void makeChai(){
    cout << " Boiling Water with Milk and Tea boiling.....";
}


int main() {

    // checkTemperature(15);
    int temp = checkTemperature(15);
    cout<<temp;

    makeChai();

    serveChai(3);
    return 0;
}

void serveChai(int cups){

    cout << " Serving " << cups << " of chai ";
}