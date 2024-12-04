#include <iostream>
#include <string>
#include <vector>

using namespace std;


// for loop only for array in cpp

int main() {

    string myArray[5] = { "Sujit", "Kumar", "Singh" };
    for(string myarr : myArray){
        cout << myarr << " " <<endl;
    }
    
    return 0;
}