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
		
		return x++;
		
		
	}

};

int main()
{ int p;
int q;
int r;

	
	Int a;
	cout<<"a: "<<a.a<<endl;
	 Int a1(3);
	 cout<<"a= "<<a1.getX()<<endl;
	 Int a2=a1;
	 cout<<"b= "<<a2.getX()<<endl;
	 Int b=a1;
	 cout<<"c= "<<b.getX()<<endl;
	 Int c=b;
	 cout<<c.getX()<<endl;
	 Int d=c;
	 cout<<"Enter a "<<endl;
cin>>p;
cout<<"Enter c "<<endl;
cin>>r;
cout<<"Enter b "<<endl;
cin>>q;
if(p=3)
{r+=p;
q-=r;
}
	 cout<<"c= "<<r<<endl;
	 cout<<"b= "<<q<<endl;
	 
	 	
	int y =p+q-r; 
	cout<<"d= "<<y<<endl;
	y = 2+p;
	cout<<" d ="<<3-q+r<<endl;
	cout<<p<<" "<<r<<" "<<r<<endl;
	
	return 0;
}
