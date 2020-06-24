
#include<iostream>
#include<iomanip>
using namespace std;
class B
{
    int a;
 public:
    int b;
    void set_ab();
    int get_a();
    void show_a(void);
};
class D:public B
{
    int c;
public:
    void mul(void);
    void display(void);
};
void B :: set_ab(void)
{
   // a=5; b=10;
   // b=10;
    cout<<"enter two number"<<endl;
   cin>>a>>b;
    cout<<"thanks"<<endl;
}
int B::get_a()
{
    return a;
}
void B::show_a()
{
    cout<<"a="<<a<<endl;
}
void D::mul()
{
    c=b*get_a();
}
void D::display()
{
    cout<<"a="<<get_a()<<endl;
    cout<<"b="<<b<<endl;
    cout<<setw(10)<<"a*b="<<"c="<<c<<endl;
}
int main()
{
    D d;
    d.set_ab();
    d.mul();
    d.display();

    d.b=22;
    d.mul();
    d.display();

    return 0;
}
