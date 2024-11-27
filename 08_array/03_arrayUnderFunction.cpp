#include <iostream>
#include <string>
using namespace std;

int itemServed(int item[], int days){
        int totalItemServed = 0;

        for (int i=0; i < days; i++ ){
            
            totalItemServed += item[i];
            cout << "today item serve is "<< item[i] <<endl;
        }
        cout << "Grand total item serve is "<< totalItemServed <<endl;
        return totalItemServed; 
    }

int main() {

    int item[5] = {10, 20, 30, 40, 50};

    itemServed(item, 5);

    return 0;
}

