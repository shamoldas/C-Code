
#include<iostream>
using namespace std;
class code
{

    int id;
public:
    code(){}
    code(int a){id=a;}
    code(code &x)
    {
        id=x.id;
    }
    void display(void)
    {
        cout<<"copy "<<id;
    }
};
int main()
{
    int i,j;
    cout<<"input two number for two function.\n";
    cin>>i>>j;
    code a(i);
    code b(a);
    code c(j);
    code d;
    d=c;
    cout<<"\n id of a:";a.display();
    cout<<"\n id of b:";b.display();
    cout<<"\n id of c:";c.display();
    cout<<"\n id of d:";d.display();
    return 0;
}
