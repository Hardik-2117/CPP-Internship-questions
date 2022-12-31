/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#define CASE_CHANGE(a) if(a>=97 && a<=122) a-=32;
int main()
{
    char a[50];
    cin.getline(a,50);
    for(int i=0;a[i]!='\0';i++)CASE_CHANGE(a[i]);
    cout<<a<<endl;
}