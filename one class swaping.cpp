#include<iostream>
using namespace std;
class sp
{
    int a,b,c;
public:
    void setvalue(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
    }
    void display(void)
    {
        cout<<"after changing data.\n";
        cout<<a<<b<<c;
    }
    void exchange(sp,sp,sp);
};
void sp::exchange(sp i,sp j,sp k)
{
    int temp;
    temp=i.a;
    i.a=j.b;
    j.b=k.c;
    k.c=temp;
}
int main()
{
    sp d,sd;
    int a,b,c;
    cin>>a>>b>>c;
    sd.setvalue(a,b,c);
    d.exchange(sd&);
    d.display();

    return 0;

}
