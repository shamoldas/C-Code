#include<iostream>
using namespace std;
class time
{
    int hours,minutes;
public:
    void getdata(int h,int m){hours=h;minutes=m;}
    void display(void)
    {
        cout<<hours<<"hours and"<<minutes<<"minites."<<endl;
    }
    void sum(time,time);
};
void time::sum(time t1,time t2)
{
    minutes=t1.minutes+t2.minutes;
    hours=minutes/60;
    minutes=minutes%60;
    hours+=t1.minutes+t2.minutes;
}
int main()
{
    int n;
    cout<<"how many time you want to data.\n";
    cin>>n;
    time a[n],b[n],c[n];

    for(int i=1;i<=n;i++)
    {
        int q,r,s,t;
        cout<<"input time 1 and time 2"<<i<<endl;
        cin>>q>>r;
        a[i].getdata(q,r);
        cin>>s>>t;
        b[i].getdata(s,t);
      //  c[i].sum(a,b);
    }
    for(int i=1;i<=n;i++)
    {
        c[i].sum(a[i],b[i]);
    }
    for(int i=1;i<=n;i++)
    {
        cout<<"frist time:"<<a[i].display();
        cout<<"second time:"<<b[i].display();
        cout<<"add two time:"<<c[i].display();
    }
    return 0;


}
