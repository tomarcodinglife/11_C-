#include <iostream> 
#include <string> 
#include <vector> 
#include <list>

using namespace std;

class StudentDetails{
    // data member or attributes
    public:
            string firstName;
            string lastName;
            int rollNumber;
            bool isPass;
            float marksPercent;
            vector<int> marksinSubjets;

            //Member Function
            
            void displayStudentDetails(){
                cout << " ------------------- Display Student Details Below ----------------------"<<endl;
                cout << " Student Name is "<< firstName << " " << lastName <<endl;
                cout << firstName << " " << lastName <<" Roll Number is  " << rollNumber <<endl;
                // cout << firstName<<lastName <<" Pass status is  " << "with"<< marksPercent<< " % " <<endl;
                cout<< firstName << " " << lastName << " is Pass status is " << (isPass? "Passed":"Failed")<< " with " << marksPercent << " % "<<endl;
                cout << " Marks subject wise is ";
                    for (int marks : marksinSubjets){
                        cout<< marks <<" ";
                    } 
                cout<< endl;
                cout << "------------------------- End Student Details --------------------------" << endl;

            }
        };

int main(){
    StudentDetails studentDetails;
    studentDetails.firstName = " Sujit ";
    studentDetails.lastName = " Tomar ";
    studentDetails.rollNumber = 189;
    studentDetails.isPass = true;
    studentDetails.marksPercent = 89.88;
    studentDetails.marksinSubjets = {69, 55, 89, 40, 60, 88};
    studentDetails.displayStudentDetails();
    return 0;
}
