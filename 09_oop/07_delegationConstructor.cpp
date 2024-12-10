#include <iostream>
#include <string>
#include <vector>

using namespace std;

class BookDetails{
    public :
        string bookName;
        int price;
        string writer;
        bool bookforSell;
        vector<string> previousFiveReaderName;

        //delegation Constructor
        BookDetails(string name):BookDetails(name, 0, "Unknown", true, {"Reader1, Reader2, Reader3, Reader4"}){};

        // constructor
        BookDetails(string bname, int bookPrice, string bookWriter, bool forSell, vector<string> bReaderName){
            cout<< "--------------------Main Constructor------------------"<<endl;
            bookName = bname;
            price = bookPrice;
            writer = bookWriter;
            bookforSell = forSell;
            previousFiveReaderName = bReaderName;
        }

        void displayBookDetails(){
            cout<<"Book Name : " << bookName << endl;
            cout<<"Price : "<< price <<endl;
            cout<<"Book Writer : "<< writer <<endl;
            cout<<"Book for Sell : "<< bookforSell <<endl;
            cout<<"Previous Five Reader Name :- ";
                for(string name : previousFiveReaderName){
                    cout << name << " "<<endl;
                }
                cout<<endl;
        }
};


int main(){
    BookDetails firstBook("History");
    BookDetails secondBook("English");

    firstBook.displayBookDetails();
    secondBook.displayBookDetails();

    return 0;
}