#include<iostream>
using namespace std;
class point
{
    int x,y;
public:
    void setvalue(int a,int b){x=a;y=b;}
    void display()
    {
        cout<<"("<<x<<","<<y<<")\n";
    }
};
int main()
{
    point p1,p2;
    int i,j,m,n;
    cout<<"enter the value of a,b in the point p"<<endl;
    cin>>i>>j;
    p1.setvalue(i,j);
    cout<<" enter the value of m,n in  the point p2"<<endl;
    cin>>m>>n;
    p2.setvalue(m,n);

   // point p1(2,2);
//point p2(5,10);
    cout<<"point p1=";
    p1.display();
    cout<<"point p2=";
    p2.display();
    return 0;
}
