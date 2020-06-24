#include<iostream>
#include<iomanip>
#define size 10
char *serial[size]={"first","second","3rd","4th","5th","6th","7th","8th","9th","10th"};
using namespace std;
class bank
{
    char name[45];
    int ac_no;
    char ac_type[23];
    double balence;
public:
    int assign(void);
    void deposit(float b);
    void withdraw(float c);
    void displayon(void);
    void displayoff(void);

};
int bank::assign(void)
{
    float initial;
    cout<<"you have to pay 500 to open your account.\n"
    <<"you have to store at least 500 TK to keep your account active.\n"
    <<"would you want to open a account??????.\n"
    <<"if yes press 1.\n"
    <<"if no press 0.\n";
    int test;
    cin>>test;
    if(test==1)
    {
        initial=500;
    balence=initial;
    cout<<"enter name, account number, account type to create account: \n";
    cin>>name>>ac_no>>ac_type;
    }
    else
        ;
    return test;
}
void bank::deposit( float b)
{
    balence+=b;

}
void bank::withdraw(float c)
{
    balence=c;
    if(balence<500)
    {
        cout<<"sorry your balance is noy sufficient to withdraw"<<c<<"TK\n"
        <<"you have to store at least 500 TK to keep your account active.\n";
    balence+=c;
    }
}
void bank::displayon(void)
{
    cout<<setw(12)<<name<<setw(17)<<ac_type<<setw(14)<<balence<<endl;
}
void bank::displayoff(void)
{
    cout<<"account has not create.\n";
}
int main()
{
    bank account[size];
    int t[10];
    int i;
    for(i=0;i<size;i++)
    {
        cout<<"enter information for "<<serial[i]<<"customer:"<<endl;
        t[i]=account[i].assign();
        if(t[i]==1)
        {
            cout<<"would you want to deposit:?"<<endl<<"if no press 0"<<endl
            <<"if yes enter deposit  amount:"<<endl;
            float dp;
            cin>>dp;
            account[i].deposit(dp);

            cout<<"would you want to with draw::?"<<endl
            <<"if no press 0"<<endl
            <<"if yes enter withdrawal amount :"<<endl;
            float wd;
            cin>>wd;
            account[i].withdraw(wd);
            cout<<endl;
        }
        else if(t[i]==0)
            cout<<"thank you see again.\n";

    }
    cout<<"see details\n";
    cout<<setw(12)<<"name:"<<setw(20)<<"account type"<<setw(12)<<"balance"<<endl;
    for(i=0;i<size;i++)
    {
        if(t[i]==1)
            account[i].displayon();
        else if(t[i]==0)
            account[i].displayoff();
    }
    return 0;
}
