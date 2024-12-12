#include <iostream>
#include <string>
#include <vector>
#include <ostream>
using namespace std;

class Car{
    private :
        string carName;
        string carModel;
        long long carChasisNumber;
        bool carDefected;
        float carPrice;

    public :
        // parameter constructor
        Car(string cName, string cModel, long long chasisNum, bool cDiffected, float cPrice) : carName(cName), carModel(cModel), carChasisNumber(chasisNum), carDefected(cDiffected), carPrice(cPrice){}

        //Delegation Constructor
        Car(string cName, float cPrice) : Car(cName, "MMGTX00523", 5215255566, false, cPrice){}

        void displayMethod() const {
            cout<<"Car Name : "<< carName << endl;
            cout<<"Model : " << carModel <<endl;
            cout<<"Chasis Number : "<< carChasisNumber <<endl;
            cout<<"Car Diffectef : "<< (carDefected ? "Yes" : "No") <<endl;
            cout<<"Car Price : "<< carPrice << endl;
        }
        // Friend Function
        friend bool comparePrice(const Car &car1, const Car &car2);
};

bool comparePrice(const Car &car1, const Car &car2){
    return car1.carPrice > car2.carPrice;
}

int main() {
    Car marutiCar("Maruti", 5.41);
    Car mahindraCar("Mahindra", 6.99);

    marutiCar.displayMethod();
    mahindraCar.displayMethod();

    if(comparePrice(marutiCar, mahindraCar)){
        cout << "Maruti Car Prise Greater than Mahindra Car"<<endl;
    }else{
         cout << "Mahindra Car Prise Greater than Maruti Car"<<endl;
    }

    return 0;  
}