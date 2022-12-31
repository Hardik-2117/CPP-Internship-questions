/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#define DIVIDE_BY_TWO(x) x/2
#define MULTIPLY_BY_TWO(x) x*2
int main()
{
    int n;
    cin>>n;
    cout<<"Multiply by two is "<<MULTIPLY_BY_TWO(n)<<endl<<"Divide by two is "<<DIVIDE_BY_TWO(n)<<endl;
}