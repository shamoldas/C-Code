#include<iostream>
using namespace std;
class add
{
    int a,b,c;
public:
    void setvalue(void);
    friend float mean(add s);

};
void add::setvalue(void)
{
    cout<<"enter the value of a,b"<<endl;
    cin>>a>>b;
}
float mean(add s)
{
    return float(s.a+s.b);
}
int main()
{
    add x;
    x.setvalue();
    cout<<"adding two number="<<mean(x)<<endl;
    return 0;
}
