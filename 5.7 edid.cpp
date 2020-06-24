#include<iostream>
using namespace std;
class time
{
    int hours ,minutes;
    int h,m;
public:
    void getdata()
    {
        cin>>h>>m;
    }
    void display()
    {
        cout<<h<<m;
    }
    void sum(time,time);
};
void time::sum(time t1,time t2)
{
    m=t1.m+t2.m;
    h=m/60;
    m=m%60;
    h=h+t1.m+t2.m;
}
int main()
{
    time a,b,c;
    c.sum(a,b);
   // c=a+b;
    a.getdata();
    b.getdata();
    c.display();

    return 0;
}
