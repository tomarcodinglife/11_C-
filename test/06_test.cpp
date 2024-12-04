#include <iostream> 
#include <string> 
#include <vector> 
#include <list>

using namespace std;

class studentDetails{
    // data member or attributes
    public:
            string firstName;
            string lastName;
            int rollNumber;
            bool isPass;
            float marksPercent;
            vector <int> marksinSubjets;

            //Member Function
            void displayStudentDetails(){
                cout << " ------------------- Display Student Details Below ----------------------"<<endl;
                cout << " Student Name is "<< firstName << lastName <<endl;
                cout << firstName << " " <<lastName <<" Roll Number is  " << rollNumber <<endl;
                cout << firstName << " " <<lastName <<" Pass status is  " << isPass<< " with "<< marksPercent<< " % " <<endl;
                cout << " Marks subject wise is ";
                for (int marks : marksinSubjets){
                    cout<< marks <<" ";
                    for (int i=0 ; i < sizeof(marksinSubjets); i++){
                        cout<< "------------- Display Student Marks-------------"<<endl;
                        cout << "Marks in Subject is " << marks<< endl;
                        cout<< "------------- Display Student Marks End-------------"<<endl;
                    }
                } 
                cout<< endl;
                cout << " ------------------------- End Student Details --------------------------"<<endl;
            }
        };

int main(){




    return 0;
}
