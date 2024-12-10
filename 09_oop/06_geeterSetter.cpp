#include <iostream>
#include <string>
#include <vector>

using namespace std; 

class Student{
    private : 
        string studentName;
        string fatherName;
        int rollNumber;
        long long mobileNumber;
        bool isPass;
        float marksPercent;
        vector <int> marksSubjectWise;
    
    public :
        Student(){
            studentName = "Unknown Name";
            fatherName = "N/A";
            rollNumber = 0;
            mobileNumber = 9999999999;
            isPass = true;
            marksPercent = 86.65;
            marksSubjectWise = {90, 80, 70, 85, 65};
        }

        // paramenter constructor
        Student(string name, string fName, int roll, long long mNumber, bool pass, float percent, vector<int> marks){
            studentName = name;
            fatherName = fName;
            rollNumber = roll;
            mobileNumber = mNumber;
            isPass = pass;
            marksPercent = percent;
            marksSubjectWise = marks;
        }
        // getter for Student Name
        string getStudentName () {
            return studentName;
        }
        // setter for Student Name Set
        void setStudentName (string sName){
            // you can set login or other thing
            studentName = sName;
        }   

        // getter for father's Name

        string getfatherName(){
            return fatherName;
        }

        // setter for father's Name

        void setFatherName(string fName){
            fatherName = fName;
        }

        // getter for Marks Subjject Wise
        vector<int> getMarksSubjectWise(){
            return marksSubjectWise;
        }
        // setter for Marks Subject Wise

        void setMarksSubjectWise(vector<int> subMarks){
            marksSubjectWise = subMarks;
        }

        void displayStudentDetails(){
            cout<<"Student Name : "<< studentName <<endl;
            cout<<"Father Name : "<< fatherName<<endl;
            cout<<"Roll No. :"<< rollNumber<<endl;
            cout<<"Mobile Number : "<< mobileNumber<<endl;
            cout<<"Pass Status : "<< (isPass? "Pass" : "Fail") <<endl;
            cout<<"Subject Wise Marks";
                for (int submarks : marksSubjectWise){
                    cout<< submarks << " "<<endl;
                }
                cout<<endl;
        }

};

int main() {
    Student student;
    student.setStudentName("Sujit Tomar");
    cout<<student.getStudentName()<<endl;  // Sujit Tomar

    student.setFatherName("ABCD");
    cout<<student.getfatherName()<<endl;

    student.displayStudentDetails();

    return 0;
}