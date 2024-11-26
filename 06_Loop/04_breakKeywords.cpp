#include <iostream>
#include <string>

using namespace std;

int main(){

    string response;

    while (true){
        cout << " Do you want to more tea (type 'stop' to ) ";
        getline(cin, response);

        if (response == "stop"){

            break;

        }
    
        cout << " Here is your another cup of tea ";
    }
    
    cout << " No more tea will be served to you ";

    return 0;
}