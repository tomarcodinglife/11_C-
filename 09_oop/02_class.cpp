#include <iostream>
#include <string>
#include <list>
#include <vector>

using namespace std;


class Tea {
    public:
        // data members
        string teaName; // name of the tea
        int servings; // Number of servings
        vector<string> ingredients; //list of ingredients for the tea

        void displayTeaDetails() {
            cout << "Tea Name : " << teaName << endl;
            cout << "Servings : " << servings << endl;
            cout << "ingredient : ";
            for (string ingredient : ingredients){
                cout << ingredient << " ";
            }
            cout<<endl;
        }
};


int main() {
    /*Tea tea you can write any name of object but many times you can see same name but remember start from capital letter is class.*/
    Tea teaObject; 

    teaObject.teaName = "Lemon Tea";
    teaObject.servings = 5;
    teaObject.ingredients = {"Water", "Lomon", "Honey Sugar", "Tea Leaves" };

    teaObject.displayTeaDetails();

    return 0;
}