#include <iostream>

using namespace std;

int main(){

    int cups;


    cout << "Enter the number of cups you have";
    cin>> cups;

    if (cups >= 20)
    {
        cout<<"You have Gold Badge and you are my Gold Badge customer"<<endl;
    }
    else if (cups >= 10 && cups < 20)
    {
        cout<< "You have Silver Badge and you are my silver Badge customer"<<endl;
    }
    else
    {
        cout << "You are my regular customber \n Thank You So Much Sir"<<endl;
    }
    

    return 0;
}