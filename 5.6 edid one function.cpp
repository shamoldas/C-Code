#include<iostream>
using namespace std;
class person
{
    char name[22];
    float age;
public:
    void getdata(void)
    {
        cout<<"input name and age\n";
        cin>>name>>age;
        cout<<"name:"<<name<<endl<<"age:"<<age;
        cout<<endl;
    }
};
int main()
{
    int n;
    cout<<"how many time you want data\n";
    cin>>n;
    person s[n];
    for(int i=1;i<=n;i++)
    {
    s[i].getdata();
    }
    return 0;
}
