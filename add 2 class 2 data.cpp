#include<iostream>
using namespace std;
class two;
class one
{
    int a,b;
public:
    void getdata(int x,int y){a=x;b=y;}
    friend void add(one,two);
};
class two
{
    int a,b;
public:
    void getdata(int x,int y){a=x;b=y;}
    friend void add(one two);
};
void add(one i,one j,two k,two l)
{
    cout<<"added friend function="<<i.a+j.b+k.a+l.b<<"ofhh.";
}
int main()
{
    one o;
    two t;
    int a,b,c,d;
    cout<<"input 1st two value.\n";
    cin>>a>>b;
    o.getdata(a,b);
    cout<<"2nd two data.\n";
    cin>>c>>d;
    t.getdata(c,d);
    add(o,t);

    return 0;
}
