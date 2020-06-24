#include<iostream>
using namespace std;
class sample
{
    int a,b;
public:
    int setvalue(int y,int x)
    {x=a;y=b;
    cin>>x>>y;
    }
    friend float mean(sample s);
};
float mean(sample s)
{
    return float(s.a+s.b);
}
int main()
{
    sample c;
    int n,m;
    cout<<"enter rhe value of a & b"<<endl;
   // cin>>n>>m;
    c.setvalue(n,m);
    cout<<"adding two number="<<mean(c);
    return 0;
}
