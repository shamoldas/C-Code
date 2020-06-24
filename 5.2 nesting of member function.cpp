#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class binary
{
    string s;
public:
    void read(void)
    {
        cout<<"enter a binary number"<<endl;
        cin>>s;
    }
    void chk_bin(void)
    {
        for(int i=0;i<s.length();i++)
        {
            if(s.at(i)!='0'&&s.at(i)!='1')
            {
                cout<<"\n incorrect binsry number format..the program is quit";
                getch();
                exit(0);
            }
        }
    }
    void ones(void)
    {
        chk_bin();
        for(int i=0;i<s.length();i++)
        {
            if(s.at(i)=='0')
                s.at(i)='1';
            else
                s.at(i)='0';
        }
    }
    void displayones(void)
    {
        ones();
        cout<<"\n\n.the 1's ones is complement of the above binary number is:"<<s;
    }
};
int main()
{
    binary b;
    b.read();
    b.displayones();
    getch();

    return 0;
}
