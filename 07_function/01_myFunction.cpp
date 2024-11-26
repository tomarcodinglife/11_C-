
/*
returnType  functionName(parameter){
    function Body
}

*/
// void means empty return
// Function Overloading means - same function name declare in multpile times with different data type or argument

#include <iostream>
#include <string>


int checkTemperature(int temprature) {
     
     return temprature;
}


int main() {

    // checkTemperature(15);
    int temp = checkTemperature(15);
    std::cout<<temp<<std::endl;
    return 0;
}