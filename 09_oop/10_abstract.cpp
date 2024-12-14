#include <iostream>
#include <string>

using namespace std;

// abstract class
class Tea{
    public : 
        // virtual function
        virtual void prepareIngredients() = 0 ;
        virtual void brew() = 0 ;
        virtual void serve() = 0;
    
    void makeTea(){
        prepareIngredients();
        brew();
        serve();
    }
};

// derived class

class  GreenTea : public Tea{
    public :
        void prepareIngredients() override {
            cout << " Green Tea and water is ready " << endl;
        }

        void brew() override {
            cout << " Green Tea Brewed " << endl;
        }

        void serve() override {
            cout << " Green Tea Serve " << endl;
        }

};

class  MasalaTea : public Tea{
    public :
        void prepareIngredients() override {
            cout << " Masala Tea and water is ready " << endl;
        }

        void brew() override {
            cout << " Masala Tea Brewed " << endl;
        }

        void serve() override {
            cout << " Masala Tea Serve " << endl;
        }

};


int main(){
    GreenTea greenTea;
    MasalaTea masalaTea;

    greenTea.makeTea();
    masalaTea.makeTea();


    return 0;
}