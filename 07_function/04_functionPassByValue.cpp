/*
Function Pass By Value - in this case you have same variable name of function parameter and argument with declare in main function with difference value than you call Function Pass By Value like this ....

remeber it when you use Function Pass By Value then same variable declare on another space than you have copy access only.
*/

#include <iostream>
#include <string>

using namespace std;

void requiredTea (int cups) { // cups are parameter variable
    cups += 5 ;
    cout << " Required Tea with additional 5 Tea cups is " << cups <<endl; // 15
}


int main (){
    int cups = 10; // cups declare with difference value
    requiredTea(cups); // pass same variable name in argument [result is 10(by main) + 5 (by function)]
    cout << "Total Required Tea is " << cups << endl; // result 10
    return 0;
}
