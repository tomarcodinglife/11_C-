#include <iostream>
#include <string>

using namespace std;

int main() {

    string teaTypes[5] = {"Oolong Tea", "Orange Tea", "Green Tea", "Black Tea", "Lemon Tea"};



    for (int i=0 ; i < 5 ; i++){
        
        if (teaTypes[i] == "Green Tea")
        {
           cout << "Skipping the" << teaTypes[i]<< endl;
           continue; // single itration remove from continue
        }
        

        cout << " Brewing  " << teaTypes[i] << "...." << endl;
    }
    
    cout << " Thank You " <<endl;

    return 0;
}