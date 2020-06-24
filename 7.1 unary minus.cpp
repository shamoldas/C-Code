#include<iostream>
#include<iomanip>
using namespace std;
class space
{
    int x,y,z;
public:
    void getdata(int a,int b,int c);
    void display(void);
    void operator-();
};
void space::getdata(int a,int b,int c)
{
    x=a;
    y=b;
    z=c;
}
void space::display(void)
{
    cout<<"x="<<x<<" ";
    cout<<"y="<<y<<" ";
    cout<<"z="<<z<<endl;
}
void space::operator-()
{
    x=-x;
    y=-y;
    z=-z;
}
int main()
{
    space s;
    float a,b,c;
    cout<<"input data.."<<endl;
    cin>>a>>b>>c;
    s.getdata(a,b,c);
    cout<<"s:"<<setw(5);
    s.display();
    -s;
    cout<<"-s:"<<setw(5);
    s.display();

    return 0;
}
