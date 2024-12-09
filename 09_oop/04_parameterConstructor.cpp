#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Student{
    public :
        string fullName;
        int rollNumber;
        long long regNumber;
        bool isPass;
        vector<int> marksSubjectWise;

        //parameter constructor
        Student(string Name, int rollNum, long long regNum, bool isPass, vector<int> marks){
            fullName = Name;
            rollNumber = rollNum;
            regNumber = regNum;
            isPass = isPass;
            marksSubjectWise = marks;
            cout << "Parameter constructor Called"<<endl;
        }

        void showStudentDetails(){
            cout << "Student Name : "<< fullName <<endl;
            cout << "Roll Number : "<< rollNumber << endl;
            cout << "Registration Number : " << regNumber << endl;
            cout << "Pass Status : " << (isPass = true ? "Pass" : "Fail")<<endl;
            cout << "Marks Subject Wise is : ";
             for (int marks : marksSubjectWise) {
                cout << marks <<endl;
             }
            cout<<endl;
        }

};


int main(){
    Student firstStudent("Sujit Tomar", 139, 15652525545, false, {85, 63, 75, 48,91});
    firstStudent.showStudentDetails();
    return 0;
}