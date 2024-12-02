#include <iostream>
#include <string>

using namespace std;

int* myMethod(int cups){
    int* sell = new int[cups];
    for (int i=0; i<cups ;i++){
        sell[i] = (i + 1)*10;
        // cout<<" today sell is "<< sell[i] << endl;
    }

    return sell;
}   

int main() {

    int cups = 5;
    int* teaSell = myMethod(cups);

    for(int i=0; i<cups; i++){
        cout << " sell of tea " << teaSell[i] <<endl;
    }
    
    delete[] teaSell;

    return 0;

}