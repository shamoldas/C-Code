#include<iostream>
using namespace std;
class employee
{
    char name[33];
    float age;
public:
    void getdata(void);
    void putdata(void);
};
void employee::getdata(void)
{
    cout<<"enter name:\n";
    cin>>name;
    cout<<"enter age:\n";
    cin>>age;
}
void employee::putdata(void)
{
   // cout<<"DISPLAY INFORMATION"<<endl;
    cout<<"name:"<<name<<endl;
    cout<<"age:"<<age;
}
int main()
{
    int n,i;
    cout<<"how many data store u & enter the number"<<endl;
    cin>>n;
    employee man[n];
    for(int i=1;i<=n;++i)
    {
        cout<<"\ndetail of man"<<i<<endl;
        man[i].getdata();
    }
    cout<<endl;
    for(i=1;i<=n;++i)
    {
        cout<<"\nman"<<i<<endl;
        man[i].putdata();
    }
    return 0;
}
