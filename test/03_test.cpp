#include <iostream>
#include <string>

using namespace std;

int* myMethod(int cups){
    int* sell = new int[cups];

    for (int i=0; i<cups ;i++){
        sell += i + 1;
        cout<<" today sell is "<< sell[i] << endl;
    }
    return sell;
}   

int main() {

    int array[] = ;

    return 0;
}