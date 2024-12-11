#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Car{
    private :
        string carName;
        string carModel;
        int carChasisNumber;
        bool carDiffected;
        vector<float> previousDaysPrice;

    public :
        // parameter constructor
        Car(string cName, string cModel, int chasisNum, bool cDiffected, vector<float> prePrice) : carName(cName), carModel(cModel), carChasisNumber(chasisNum), carDiffected(cDiffected), previousDaysPrice(prePrice){}

        //Delegation Constructor
        Car(string cName) : Car(cName, "MMGTX00523", 5215255566, false, {5.41, 5.50, 5.90, 5.10, 5.80}){};

        void displayMethod() const {
            cout<<"Car Name : "<< carName << endl;
            cout<<"Model : " << carModel <<endl;
            cout<<"Chasis Number : "<< carChasisNumber <<endl;
            cout<<"Car Diffectef : "<< carDiffected <<endl;
            cout<<"Previos Days Price (in Lakh) : ";
                for(float carPrices : previousDaysPrice){
                    cout << carPrices <<endl;
                }
                cout<<endl;
        }
};

int main() {
    Car car("Maruti");
    cout<< "Maruti Car Called"<<endl;
    cout<< car <<endl;

    return 0;
}