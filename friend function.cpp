#include<iostream>
using namespace std;
class complex
{
    float x,y;
public:
    void input(float r,float i) {x=r;y=i;}
    friend complex sum(complex,complex);
    void show(complex c)
    {cout<<c.x<<"+j"<<c.y;}
};
complex sum(complex c1,complex c2)
{
    complex c3;
    c3.x=c1.x+c2.x;
    c3.y=c1.y+c2.y;
    return(c3);
}
int main()
{
    complex c4,c5,c6;
    c4.input(2.0,3.0);
    c5.input(4.0,5.0);
    c6=sum(c4,c5);
    c6.show(c6);
    return 0;
}
