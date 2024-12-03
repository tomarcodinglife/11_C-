#include <iostream>
#include <string>
#include <vector>

using namespace std;




int main() {

    string myArray[5] = { "Sujit", "Kumar", "Singh" };
    for(string myarr : myArray){
        cout << myarr << " " <<endl;
    }
    
    return 0;
}