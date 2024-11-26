#include <iostream>
#include <string>
using namespace std;

void studentDetails(string studentName) {
    cout << " Student Name is " << studentName <<endl;
}

void studentDetails(int studentRollNumber){
    cout << " Student Roll Number is " << studentRollNumber<<endl;
}

void studentDetails(double marksPer) {
    cout<< " Student Achive Marks% in Final Exam "<<marksPer<<endl;
}

int main(){

    studentDetails("Sujit Kumar Singh"); 
    studentDetails(155);
    studentDetails(95.33);

    return 0;
}