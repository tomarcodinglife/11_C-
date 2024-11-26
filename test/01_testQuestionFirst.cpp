#include <iostream>

using namespace std;

int main() {

    int numA;
    int numB;
    int numC;
    int greaterNum;


    cout << " Enter the Number A ";
    cin >> numA;
    cout << " Number A Recorded :" << numA <<endl;

    cout << " Enter the Number B ";
    cin >> numB;
    cout << " Number B Recorded :" << numB <<endl;
    
    cout << " Enter the Number C ";
    cin >> numC;
    cout << " Number C Recorder :" << numC <<endl;

    
    if (numA < numB && numC < numB){
        cout << " Numebr"<< numB << "is Greater Number";
    }
    else if (numB < numA && numC < numA){
        cout << " Numebr"<< numA << "is Greater Number";
    }
    else if (numA < numC && numB < numC){
        cout << " Numebr"<< numC << "is Greater Number";
    }
    
    // cout <<"Greater Number is : "<< greaterNum <<endl;
    

}