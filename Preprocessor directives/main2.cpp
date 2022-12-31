/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int main()
{
string s,ans;
cout << "Enter the string: " << endl;
getline (cin, s);
int maxm=0;
for(int i=0;i<s.length();i++)
{
for(int j=i;j<s.length();j++)
{
string x=s.substr(i,j-i+1);  
for(int k=j+1;k<s.length();k++)
{
string y=s.substr(k,j-i+1);
if(y==x)  
{
if(y.length()>maxm)
{
maxm=y.length();
ans=y;
}
}
}
}
}
cout << "The longest repeating: " << ans << endl;
return 0;
}
