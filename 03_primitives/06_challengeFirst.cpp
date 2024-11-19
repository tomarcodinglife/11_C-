#include  <iostream>

using namespace std;

int main () {

    string type_of_Tea = "LemonTee";
    float pricePerKilogram = 49.99;
    char rating = '3';


    std::cout<< type_of_Tea <<std::endl;
    std::cout<< pricePerKilogram << std::endl;
    std::cout<< rating << std::endl;


    // escape sequence
    std::cout << "escape sequence" << std::endl;
    std::cout<< "type of tee is \t" << type_of_Tea << " & price per kilogram is \t" << pricePerKilogram << "\n & rating is \t"<< rating << std::endl;
    return 0; 
}
