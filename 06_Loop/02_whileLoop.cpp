#include <iostream>
#include <string>


using namespace std;

int main(){

    int teaCups;

    cout << " Enter the number of tea cups to sell";
    cin>>teaCups;

    while (teaCups > 0) 
    {
        teaCups--;
        cout << "Serving the cup of tea \n" << teaCups << "remaining" << endl;
        // teaCups--;
    }

    cout << "All tea cups are served."<<endl;    

    return 0;
}