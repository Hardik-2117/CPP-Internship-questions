#include<bits/stdc++.h>
using namespace std;
class Int

{
	private:
		int x;
	
	public:
		int a,b;
		Int()
		{
			a=0;
		}
	 
	Int(int x1)
	{
		x=x1;
	}
	Int(const Int &a1)
	{
		x =a1.x;
	}
	int getX()
	{
		return x;
	}
};
int main()
{
	
	Int a;
	cout<<"a: "<<a.a<<endl;
	 Int a1(3);
	 cout<<"a= "<<a1.getX()<<endl;
	 Int a2=a1;
	 cout<<"b= "<<a2.getX()<<endl;
	return 0;
}
