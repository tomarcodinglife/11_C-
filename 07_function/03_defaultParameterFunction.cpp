//Formal Parameter & Default Parameter
#include <iostream>
#include <string>
using namespace std;

//formal parameter function in cpp
void studentDetails(string studentName){
    cout << " Studnet Name is  " << studentName <<endl;
}

//default parameter function in cpp 
void studentDetails(int rollNumber = 00){ 
    cout << " Studnet Roll Number is " << rollNumber <<endl;
}

int main() {

    studentDetails("Sujit Kumar Singh");
    studentDetails();

    return 0;
}
