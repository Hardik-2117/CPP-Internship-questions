#include <iostream>
using namespace std;
 
// Driver Code
int main()
{ int arr[100][100];
    
    int m , n ; 
    int c = 0;
 cout<<"Enter the no. of rows ";
 cin>>m;
 cout<<"\nEnter the no. of columns ";
 cin>>n;
    
 
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
 
 cin>>arr[i][j];
        }
    }
 
    // Traverse the 2D array
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
 
            // Print values of the
            // memory block
            cout << arr[i][j]<<"\t";
        }
        cout << endl;
    }
   
      delete []arr;
 
    return 0;
}
