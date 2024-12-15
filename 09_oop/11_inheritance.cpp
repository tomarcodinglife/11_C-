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
        GreenTea(int serv) : Tea("Green Tea", serv){
            cout << "Green Tea Constructor Called"<<endl;
        }
        void brew() const override{
            cout << "Brewing" << teaName << "by steeping tea leaves" <<endl;
        }

        //
        ~GreenTea(){
            cout << "Green tea constructor called "<< endl;
        }
};

class MasalaTea : public Tea {
    public :


};

int main(){


    return 0;
}