#include <iostream>
#include <string>

using namespace std;




int* prepareChai(int cups){

    int* orders = new int [cups]; // * is Pointer for memory reference and new is dynamic memory

    for (int i=0; i<cups; i++)
    {
       orders[i] = (i + 1) * 10;
    }
    return orders;
}

int main(){

    int cups = 5;

    int* chaiOrder =  prepareChai(cups);
    for (int i=0; i<cups; i++)
    {
       cout << "Cups " << i + 1 << " has "<<chaiOrder[i]<<" ml \n";
    }
    
    delete[] chaiOrder;

    return 0;
}