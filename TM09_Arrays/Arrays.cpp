#include <fstream>
#include <iostream>
using namespace std;
int arr[10];
 int createArr();
 int addElements();
 int deleteElementsInRange();
 int printarr();
 int cleanarr();
 int replaceArr();
int main () {

string data = "3 7 5 12 \n3 7 5 15 11 \n3 7 12 30 11 ";

   // open a file in write mode.
   ofstream outfile;
   outfile.open("input.txt");

   
   // write inputted data into the file.
   

   outfile << data << endl;
   
   
   // again write inputted data into the file.
   

   // close the opened file.
   outfile.close();

   // open a file in read mode.
   ifstream infile; 
   infile.open("input.txt"); 
 
   infile >> data; 

   // write the data at the screen.
   cout << data << endl;
   
   // again read the data from the file and display it.
   infile >> data; 
   cout << data << endl;  
   

   // write the data at the screen.
   
   
   // again read the data from the file and display it.
   

   // close the opened file.
   infile.close();


while(true)
{cout<<"enter C to create array "<<endl;
cout<<"enter A to add elements to the array "<<endl;
cout<<"enter D to delete the last added element in array "<<endl;
cout<<"enter R to replace value at specifies index in array "<<endl;
cout<<"enter P to print array "<<endl;
cout<<"enter E to erase array "<<endl;
char ch;
cin>>ch;
	switch(ch)
	{
		case 'C':
			createArr();
			break;
			case 'A':
				addElements();
			break;
			case 'D':
				deleteElementsInRange();
				break;
				case 'R':
					replaceArr();
					break;
					case 'P':
						printarr();
						break;
						case 'E':
							cleanarr();
							exit(0);
							break;
				default:
					cout<<"Invalid input"<<endl;
					
	}
	
}
   return 0;
}
int createArr()
{
	cout<<"Array Created"<<endl;
	
	return 0;
}
int addElements()
{
	static int count=1;
if(count==1)	
{
	arr[0]=3;
}
		count++;
		if(count==2)
		{
			arr[1]=7;
		}
		count++;
		if(count==3)
		{
			arr[2]=5;
		}
		count++;
		if(count==4)
		{
			arr[3]=12;
		}
		
		for(int i=0;i<4;i++)
		{
		
		cout<<arr[i]<<"\t";
		
	}
	cout<<endl;
}
int deleteElementsInRange() {
   int i, newIndex = 0;
   int n=4;
   
   for (i = 0; i < n; i++) {
      // adding updating element if it is not in the given range
      if (i <= 3 || i >= 3) {
         arr[newIndex] = arr[i];
         newIndex++;
      }
   }
   cout<<arr[i]<<"\t";
   cout<<endl;
   // returing the updated index
   return newIndex;
}
int printarr()
{ for(int i = 0; i<=4;i++)
{
	cout<<arr[i]<<endl;
}
	
}
int cleanarr()
{
	cout<<"array is clean now"<<endl;
}
int replaceArr()
{
	int mark[5]={3,7,5,15,11};
	mark[2]=12;
	mark[3]=30;
	for(int i =0;i<5;i++)
	{
		cout<<mark[i]<<"\t";
	}
	cout<<endl;
}
