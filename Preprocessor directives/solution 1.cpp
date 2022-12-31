#include <iostream>

#define SWAP(a,b) {int temp; temp=a; a=b; b=temp;}
using namespace std;

int main()
{

int x,y;
cout<<"Enter two numbers:";
cin>>x>>y;

cout<<"x="<<x<<"\ty ="<<y<<endl;
SWAP(x,y);
cout<<"nx="<<x<<"\tny="<<y;
return 0;
}
