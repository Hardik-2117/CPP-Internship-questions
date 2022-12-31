#include <iostream>
#include <string>
#include <fstream>

#include <iomanip>

using namespace std;

int main() {
    signed char d;
    ifstream inFile;
    ifstream newfile;
    ifstream inFile1;
    ifstream newfile2;
    inFile.open("String.txt");
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
        inFile.close();
    }
    inFile1.open("String2.txt");
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
        inFile1.close();
    }
    newfile.open("String.txt",ios::in); //open a file to perform read operation using file object
   if (newfile.is_open()){ //checking whether the file is open
      string tp;
      while(getline(newfile, tp)){ //read data from file object and put it into string.
         cout << tp << "\n"; //print the data of the string
      }
      newfile.close(); //close the file object.
   }
   newfile2.open("String2.txt",ios::in); //open a file to perform read operation using file object
   if (newfile2.is_open()){ //checking whether the file is open
      string tp1;
      while(getline(newfile2, tp1)){ //read data from file object and put it into string.
         cout << tp1 << "\n"; //print the data of the string
      }
      newfile2.close(); //close the file object.
   }
   
   signed char ch;
   	cout<<"Enter the character ";
   	cin>>ch;
   	
   	
   		cout<<"A\tA\nSample\tSample\nAn\tAn\nThe\tThe\nProgram\tProgram\nObject\tObject\nAnalysis\tAnalysis\nWord\tWord\nProcessor\nLanguage\n$";
				
   	
			
    return 0;
    
}
    
    
    
   

