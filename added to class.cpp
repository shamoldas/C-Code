#include<iostream>
using namespace std;
class ABC;
class XYZ
{
    int data,vata;
public:
    void setvalue(int value,int calue){data=value;vata=calue;}
    friend void add(XYZ,ABC);
};
class ABC
{
    int das,vas;
public:
    void setdata(int d,int v){das=d;vas=v;}
    friend void add(XYZ,ABC);
};
void add(XYZ a,XYZ b,ABC x,ABC y)
{
    cout<<"added to class="<<a.data+b.vata+x.das+y.vas;
}
int main()
{
    XYZ X;
    ABC A;
    int i,j,k,l;
    cout<<"input 1st 2 number.\n";
    cin>>i>>j;
    X.setvalue(i,j);
    cout<<" 2nd input 2 data.\n";
    cin>>k>>l;
    A.setdata(k,l);
    add(X,A);
    return 0;
}
