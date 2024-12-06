#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;

class StudentDetails {
    public:
        string firstName;
        string lastName;
        int rollNumber;
        bool isPass;
        float marksinPercent;
        vector<int> marksInSubject;

        void displayStudentDetails(){
            cout<< "---------------- Display Student Details ----------------------------- \n";
            cout << "Student Name is " << firstName << " "<< lastName <<endl;
            cout << firstName << " " << lastName << " Roll Number is "<< rollNumber <<endl;
            cout<< firstName << " " << lastName << " pass status is " << isPass<<endl;
            cout<< " marks subject wise is ";
             for(int marks : marksInSubject){   
                    cout << marks<< " ";
             }
            cout<< endl;
            cout << " -----------------------------End Studnet Details ---------------------------------------------------------------- ";
        }

};


int main(){
    StudentDetails studentDetails;

    studentDetails.firstName = " Sujit ";
    studentDetails.lastName = " Tomar ";
    studentDetails.rollNumber = 188;
    studentDetails.isPass = true;
    studentDetails.marksinPercent = 86.2;
    studentDetails.marksInSubject = {64, 86, 95, 55, 40, 80};
    studentDetails.displayStudentDetails();
    return 0;

}