#include<iostream>
using namespace std;
class one;
class two
{
    int a;
    int b;
public:
    void setvalue(int x,int y){a=x;b=y;}
    void display(void)
    {
        cout<<"value one="<<a<<"and"<<b<<endl;
    }
    friend void exchange(two&,one&);
};
class one
{
    int c,d;
public:
    void setvalue(int p,int q){c=p;d=q;}
    void display(void)
    {
        cout<<"value 2="<<c<<"and"<<d<<endl;
    }
    friend void exchange(two&,one&);
};
void exchange(two& i,two& j,one& k,one& l)
{
    int temp;
    temp=i.a;
    i.a=j.b;
    j.b=k.c;
    k.c=l.d;
    l.d=temp;
}
int main()
{
    class o;
    class t;
    int e,f,g,h;
    cout<<"input 1st two number.\n";
    cin>>e>>f;
    t.setdata(e,f);
    cout<<"input 2nd two number.\n";
    cin>>g>>h;
    o.setvalue(g,h);
    exchange(t,o);
    cout<<"after exchange the data.\n\n";
    t.display();
    o.display();

    return 0;
}
