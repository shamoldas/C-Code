#include<iostream>
using namespace std;
class ABC;
class XYZ
{
    int a;
public:
    void setvalue(int i){a=i;}
    friend void max(XYZ,ABC);
};
void max(XYZ m,ABC n)
{
    if(m.n>=n.a)
        cout<<max.x
        else
        cout<<n.a;
}
int main()
{
    XYZ x1;
    x1.setvalue(10);
    ABC a1;
    a1.setvalue(20);
    max(x1,a1);
    return 20;
}
