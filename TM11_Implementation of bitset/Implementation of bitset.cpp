#include <iostream>
#include <bitset>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::bitset;
class Bitset
{
    int n;
    int *arr=&n;
    //string s = "1100";
    bitset<4>b;
public:
    Bitset(int size)
    {
        n=size;
    }
    void setbit(int idx)
    {
        b.set(idx,1);
    }
    void setbit(int idx,int value)
    {
        b.set(idx,value);
    }
    void clearbit(int idx)
    {
        if(b[idx]!=0)
        {
           b.set(idx,0);
        }
    }
    void togglebit(int idx)
    {
        if(b[idx]==0)
        {
           b.set(idx,1);
        }
        else
        {
            b.set(idx,0);
        }
    }
    int getbit(int idx)
    {
        return b[idx];
    }
    void print()
    {
        cout<<"bit is "<<b<<endl;
    }
};
int main()
{
    Bitset b(4);
    b.setbit(0);
    b.setbit(2);
    b.print();
    b.clearbit(2);
    b.print();
    b.setbit(1,1);
    b.print();
    b.togglebit(1);
    b.print();
    b.togglebit(1);
    b.print();
    cout<<"bit at 1 is "<<b.getbit(1)<<endl;
}
