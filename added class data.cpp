#include<iostream>
using namespace std;
class ABC;
class XYZ
{
    int data,vata;
public:
    void setvalue(int d,int v){data=d;vata=v;}
    friend void add(XYZ,ABC);
};
class ABC
{
    int data,vata;
public:
    void setvalue(int d,int v){data=d;vata=v;}
    friend void add(XYZ,ABC);
};
void add(XYZ x,XYZ y,ABC a,ABC b)
{
    cout<<"added two class data="<<x.data+y.vata+a.data+b.vata;
}
int main()
{
    XYZ X;
    ABC A;
    int i,j,k,l;
    cout<<"input 1st 2 data.\n";
    cin>>i>>j;
    X.setvalue(i,j);
    cout<<"2nd 2 data.\n";
    cin>>k>>l;
    A.setvalue(k,l);
    add(X,A);

    return 0;
}
