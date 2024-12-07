#include <iostream>
#include <string>
#include <vector>

using namespace std;

class StudentDetails{
    public: 
        string firstName;
        string lastName;
        int rollNumber;
        bool isPass;
        float marksPercent;
        vector<int> marksInSubject;
    
        void dispalyStudentDetails(){
            cout<< " -------------------- Student Details -------------------- "<<endl;
            cout<< "Student Name is "<< firstName << " "<< lastName <<endl;
            cout<< firstName << " "<<lastName << "is pass status is "<< (isPass? " Passed" : "Failed")<<endl;
            cout<< firstName << " "<< lastName << "Marsk Percent is "<< marksPercent<<endl;
            cout << " Marks subject wise is ";
                for(int marks : marksInSubject){
                cout << marks << " ";
                }
                cout << endl;
            cout << " ------------------- End Student Details -------------- "<< endl;

        }
};

// default constructor


int main () {
    StudentDetails studentDetails;
    studentDetails.firstName = "Sujit";
    studentDetails.lastName = "Tomar";
    studentDetails.rollNumber = 135;
    studentDetails.isPass = true;
    studentDetails.marksPercent = 86.56;
    studentDetails.marksInSubject = {85, 95, 65, 75, 70, 47};
    studentDetails.dispalyStudentDetails();
    return 0;
}