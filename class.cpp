
#include<iostream>
using namespace std;
class person
{
    char name[33],add[33],occ[33],gender[33];
    float age,salary;
public:
    void getdata(void);
    void putdata(void);
};
void person::getdata(void)
{
    cout<<"enter person name"<<endl;
    cin>>name;
    cout<<"person address"<<endl;
    cin>>add;
    cout<<"occupation"<<endl;
    cin>>occ;
    cout<<"gender"<<endl;
    cin>>gender;
    cout<<"age of"<<endl;
    cin>>age;
    cout<<" monthly salary"<<endl;
    cin>>salary;
}
void person::putdata(void)
{
    cout<<"name:"<<name<<endl;
    cout<<"address:"<<add<<endl;
    cout<<"occupation:"<<occ<<endl;
    cout<<"age:"<<age<<endl;
    cout<<"salary:"<<salary<<endl;
    cout<<"gender:"<<gender<<endl;
}
int main()
{
    int n,i;
    cout<<"how many data you store & enter the number"<<endl;
    cin>>n;
    person sd[n];
    for(i=1;i<=n;i++)
    {
        cout<<"\n detail of person"<<i<<"\n";
        sd[i].getdata();
    }
    for(i=1;i<=n;i++)
    {
        cout<<"person"<<i<<"\n";
        sd[i].putdata();
    }
    return 0;

}
