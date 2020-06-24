
#include<iostream>
using namespace std;
class point
{
    int x,y;
public:
    point(int a,int b)
    {
        x=a;y=b;
      //  cout<<"enter the value of a,b"<<endl;
        //cin>>a>>b;

    }
    void display()
    {
        cout<<"("<<x<<","<<y<<")\n";
    }
};
int main()
{
    point p1(2,2);
    point p2(5,10);
    cout<<"point p1=";
    p1.display();
    cout<<"point p2=";
    p2.display();
    return 0;
}
