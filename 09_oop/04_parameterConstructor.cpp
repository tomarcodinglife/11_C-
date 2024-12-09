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
            cout << "Pass Status : " << (isPass ? "Fail" : "Pass")<<endl;
            cout << "Marks Subject Wise is : \n";
             for (int marks : marksSubjectWise) {
                cout << marks <<" "<<endl;
             }
            cout<<endl;
        }

};


int main(){
    Student firstStudent("Sujit Tomar", 139, 15652525545, false, {85, 63, 75, 48, 91});
    Student secondStudent("Amit Kumar", 135, 15652526565, true, {98, 68, 45, 78, 79, 80, 68});
    firstStudent.showStudentDetails();
    secondStudent.showStudentDetails();
    return 0;
}