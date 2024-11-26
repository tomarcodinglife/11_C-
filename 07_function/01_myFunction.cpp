
/*
returnType  functionName(parameter){
    function Body
}

*/
// void means empty return

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