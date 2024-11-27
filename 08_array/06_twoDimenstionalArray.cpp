#include <iostream>
#include <string>
using namespace std;


int main(){

    int chaiSales[4][7] = {
        {20, 18, 30, 25, 10, 51, 16},
        {18, 31, 15, 14, 26, 34, 25},
        {15, 25, 35, 25, 22, 26, 21},
        {15, 24, 25, 25, 26, 21, 26},
    };

    for (int i=0; i<4; i++){
        cout << " i am at shop "<< i+1 << "\n";
        for (int j=0; j<7; j++) {
            cout << chaiSales [i] [j] <<" cup \n";
        }
    }

    return 0;
}