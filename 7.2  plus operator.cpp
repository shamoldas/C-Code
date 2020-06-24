#include<iostream>
using namespace std;
class complex
{
    float x,y;
public:
    complex(){}
    complex (float real,float imag)
    {
        x=real;y=imag;
    }
    complex operator+(complex c);
    void display(void);
};
complex complex::operator+(complex c)
{
    complex temp;
    temp.x=x+c.x;
    temp.y=y+c.y;
    return(temp);
}
void complex::display(void)
{
    cout<<x<<"+j"<<y<<endl;
}
int main()
{
    complex c1,c2,c3;
    float a,b,c,d;
    cout<<"input c1 value"<<endl;
    cin>>a>>b;
    c1=complex(a,b);
    cout<<"input c2 value"<<endl;
    cin>>c>>d;
    c2=complex(c,d);
    c3=c1+c2;
    cout<<endl;
    cout<<"c1=";c1.display();
    cout<<"c2=";c2.display();
    cout<<"c3=";c3.display();

    return 0;
}
