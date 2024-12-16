#include <iostream>
#include <string>
#include <vector>

using namespace std;

// base class / main class / parents class 

class Tea {
    protected :
        string teaName;
        int serving;

    public :
    // Constructor Methods
        Tea(string name, int serv) : teaName(name), serving(serv){
            cout << "Tea Constructor Called" << teaName <<endl;
        }

    // Virtual Functions
    virtual void brew() const {
        cout << "Brewing " << teaName << "With generic method "<<endl;
    }
    // Virtual Functions
    virtual void serve() const {
        cout << "Serveing " << serving << "cup of tea With generic method "<<endl;
    }
    // Virtual Destroctor Method
    virtual ~Tea(){
        cout << "Tea Destructor called for"<< teaName <<endl;
    }
};

class GreenTea : public Tea {
    public :
        // virtual method 
        GreenTea(int serv) : Tea("Green Tea", serv){
            cout << "Green Tea Constructor Called"<<endl;
        }
        // tea class's brew method overide
        void brew() const override{
            cout << "Brewing" << teaName << "by steeping tea leaves" <<endl;
        }

        //Virtual Destructor Method
        ~GreenTea(){
            cout << "Green tea Destructor called "<< endl;
        }
};

class MasalaTea : public Tea {
    public :
        //Constructor Method
        MasalaTea(int serv) : Tea("Masala Tea", serv){
            cout << "Masala Tea Constructor Called"<<endl;
        }

        //tea class's brew method overide
        void brew() const override final { // when you write method with final it means you can't overide this method.
            cout << "Brewing" << teaName << "by steeping tea leaves, masala with milk"<<endl;
        }
        //
        ~MasalaTea(){
            cout << "Masala Tea Destructor Called for Clear Memory"<<endl;
        }
};

/*
class spicyMasalaTea : public MasalaTea {
    public :
        void brew() const override { // here you are wrong because you override method who create with final keyword in  masala tea

        }
} ;
*/

int main(){
    Tea* tea1 = new GreenTea(2);
    Tea* tea2 = new MasalaTea(5);

    tea1 -> brew();
    tea1 -> serve();

    tea2 -> brew();
    tea2 -> serve();

    delete tea1;
    delete tea2;

    return 0;
}