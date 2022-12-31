#include<string>
#include<iostream>
#include <fstream>
using namespace std;
void viewbook();
void borrowbook();
void returnbook();
struct library
 
{
	 int no_of_copies_available;
	 string name_of_book;
	 int book_id;
	 string flag;
};
int main()
{
	cout<<"Hello customer.Welcome to GoodWill Library"<<endl;
	while(true)
	{
		 cout<<"==========================================="<<endl;
		 cout<<"Press 1 to view books in library:\n";
		 cout<<"Press 2 to Request for new book:\n";
		 cout<<"Press 3 to Return the book:\n";
		 cout<<"Press 4 to exit:\n";
		 int a;
		 cin>>a;
		 switch(a)
		 {case 1:
		 	viewbook(); 
		 	break;
		 	case 2:
		 		borrowbook();
		 		break;
		 		case 3:
		 			returnbook();
		 			break;
		 			case 4:
		 				exit(0);
		 				break;
		 	default:
		 		cout<<"Invalid Entry .";
			}
		 
		 
	}
	
	return 0;  
}

void viewbook()
{
	fstream newfile;
	newfile.open("book_database.txt",ios::in); //open a file to perform read operation using file object
   if (newfile.is_open()){   //checking whether the file is open
      string tp;
      while(getline(newfile, tp)){  //read data from file object and put it into string.
         cout << tp << "\n";   //print the data of the string
      }
      newfile.close();   //close the file object.
   }
	
}
void borrowbook()
{
	library b;
	cout<<"Enter the book id \n";
	cin>>b.book_id;
	if(b.no_of_copies_available >0)
	{
		cout<<" Congratulations customer your book is alloted. .Pls collect it from the shelf\n";
		
	}
	else
	{
		cout<<"This book is presently not in our shelf. Pls try later\n";
	}
	
}
void returnbook()
{ library a;
	cout<<"Enter the book id\n";
	cin>>a.book_id;
	if(a.book_id>20)
	{
		cout<<"Book id is not correct. Pls try again\n";
	}
	else
	{
		cout<<"Thankyou customer .Pls place the book back on the shelf\n";
	}
}
