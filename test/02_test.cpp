#include <iostream>
#include <string>

using namespace std; 

   int myArrayfun(int anyArray[], int size){
        int total = 0;
        for (int i=0 ; i<size ; i++){
            total += anyArray[i];

            cout<< " current item \n"<< anyArray[i];
            // return total;
        }
        cout<<"the loop end"<<endl;
        return total;
   }


   int teaSell(int arrayDay[], int length){
        int totalSell = 0;

        for(int i=0; i<length ; i++){
            totalSell += arrayDay[i];
            cout << " tea sell "<<arrayDay[i]<<" at current Day \n";
        }
        cout << " total tea sell " << totalSell << " Thank You"<<endl;
        return totalSell;
   }

int main() {

    // int array[10] = {10, 20, 30, 40, 50, 60};
    // myArrayfun(array, 6);

    int sell[5] = {18, 15, 31, 60, 45};
    teaSell(sell, 5);

    return 0;
}