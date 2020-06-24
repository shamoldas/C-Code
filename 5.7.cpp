#include<iostream>
using namespace std;
class time
{
    int hours;
    int minutes;
public:
    void gettime(int h,int m)
    {
        hours=h;minutes=m;
    }
    void puttime(void)
    {
        cout<<hours<<"hours and"<<" ";
        cout<<minutes<<"minutes"<<"\n";
    }
    void sum(time ,time);
};
void time::sum(time t1,time t2)
{
    minutes=t1.minutes+t2.minutes;
    hours=minutes/60;
    minutes=minutes%60;
    hours=hours+t1.hours+t2.hours;
}
int main()
{
    time a,b,c;
    a.gettime(2,45);
    b.gettime(3,30);
    c.sum(a,b);
    cout<<"a=";a.puttime();
    cout<<"b=";b.puttime();
    cout<<"c=";c.puttime();
    return 0;
}
