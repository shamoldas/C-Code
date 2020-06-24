
#include<iostream>
using namespace std;
class complex
{
    float x,y;
public:
    complex() { }
    complex (float i,float r){x=r;y=i;}
   friend complex operator+(complex ,complex);
    void display()
    {
        cout<<x<<"+j"<<y;
    }
};

complex operator+(complex a,complex b)
{
    complex t;
    t.x=a.x+b.x;
    t.y=a.y+b.y;
    return(t);
}
int main()
{
    complex c1(10,20);
    complex c2(5,10);
    complex c3;
    c1.display();
    cout<<endl;
    c2.display();
    cout<<endl;
   //c3=c1.operator+(c2);
   // c3=c1.operator+(c2);
    c3=c1+c2;
    c3.display();

    return 0;
}
