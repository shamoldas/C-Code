
#include<iostream>
using namespace std;
class three;
class two;
class one
{
   int a;
public:
    void getdata(int x){a=x;}
    void display(void)
   {
        cout<<"1st value="<<a<<endl;
   }
   friend void exchange(one&,three&,two&);
};
class two
{
   int b;
public:
    void getdata(int y){b=y;}
    void display(void)
   {
        cout<<"2nd value="<<b<<endl;
   }
   friend void exchange(one&,three&,two&);
};

class three
{
   int c;
public:
    void getdata(int z){c=z;}
    void display(void)
   {
        cout<<"3rd value="<<c<<endl;
   }
   friend void exchange(one&,three&,two&);
};
void exchange(one& i,three& k,two& j)
{
    int temp;
    temp=i.a;
    i.a=k.c;
    k.c=j.b;
    j.b=temp;
}
int main()
{
    one o;
    two t;
    three th;
    int a,b,c;
    cout<<"input 1st one.\n";
    cin>>a;
    o.getdata(a);
    cout<<"2nd data.\n";
    cin>>b;
    t.getdata(b);
    cout<<"last one.\n";
    cin>>c;
    th.getdata(c);
    exchange(o,th,t);
    cout<<"after swaping data.\n";
    o.display();
    t.display();
    th.display();

    return 0;
}
