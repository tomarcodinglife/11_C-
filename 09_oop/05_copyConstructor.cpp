#include <iostream>
#include <string>
#include <vector>

using namespace std;

class PatientDetails{
    public : 
        string* patientName;
        long patientRegNumber;
        int totalNumberOfPersonWithPatient;
        bool lodgingFoodingService;
        vector <int> bedCharges;

        //Paramete Constroctor
        PatientDetails(string name, long reg, int personswithpaient, bool lodgingFooding, vector<int> bedCharge){
            patientName = new string (name);
            patientRegNumber = reg;
            totalNumberOfPersonWithPatient = personswithpaient;
            lodgingFoodingService = lodgingFooding;
            bedCharges = bedCharge;
    }

        PatientDetails(const PatientDetails& Details){
            patientName = new string (*Details.patientName);
            patientRegNumber = Details.patientRegNumber;
            totalNumberOfPersonWithPatient = Details.totalNumberOfPersonWithPatient;
            lodgingFoodingService = Details.lodgingFoodingService;
            bedCharges = Details.bedCharges;
            cout << "Deep Copy Constroctor"<<endl;
        }

        // Distructor 
        ~PatientDetails(){
            delete patientName;
            cout<< " Distructor Called for Patient Dynamic Memory Clear" << endl;
        }

    // Copy Constroctor

        void displayPatientDetails(){
            cout<< "Patient Name : "<< *patientName <<endl;
            cout<< "Registration Number : "<<patientRegNumber<< endl;
            cout<< "Total Number of Person With Patient :"<< totalNumberOfPersonWithPatient <<endl;
            cout<< "Lodigng Fooding Service : "<< lodgingFoodingService <<endl;
            cout<< "Bed Charge : \n";
                for (int charge : bedCharges){
                    cout << charge << " " << endl;
                }
            cout<< endl;
        }   

};

int main(){
    PatientDetails firstPatientDetails("Sujit", 452582566, 5, true, {700, 1200, 1800, 1100, 900}); 
    // firstPatientDetails.displayPatientDetails();

    // copy 
    PatientDetails secondPatientDetails = firstPatientDetails;
    // secondPatientDetails.displayPatientDetails(); 

    *firstPatientDetails.patientName = "Amit Kumar";

    cout << " First Patient Details " <<endl;
    firstPatientDetails.displayPatientDetails();
    cout << " Second Patient Details " <<endl;
    secondPatientDetails.displayPatientDetails();

    return 0;
}