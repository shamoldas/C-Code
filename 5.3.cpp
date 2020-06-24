#include<iostream>
using namespace std;
#define m 22
//const m=50;
class items
{
   int itemcode[m];
   float itemprice[m];
   int count;
   public:
       void cnt(void){count=0;}
       void getitem(void);
       void displaysum(void);
       void remove(void);
       void displayitems(void);
};
void items::getitem(void)
{
    cout<<"enter item code:"<<endl;
    cin>>itemcode[count];
    cout<<"enter item cost ro price:"<<endl;
    cin>>itemprice[count];
    count++;
}
void items::displaysum(void)
{
    float sum=0;
    for(int i=1;i<=count;i++)
        sum=sum+itemprice[i];
    cout<<"\n total value="<<sum<<endl;
}
void items::remove(void)
{
    int a;
    cout<<"enter the item code:"<<endl;
    cin>>a;
    for(int i=1;i<=count;i++)
        if(itemcode[i]==a)
        itemprice[i]=0;
}
void items::displayitems(void)
{
    cout<<"\n code price\n";
    for(int i=1;i<=count;i++)
    {
        cout<<"\n"<<itemcode[i];
        cout<<" "<<itemprice[i];
    }
    cout<<endl;
}
int main()
{
    items order;
    order.cnt();
    int x;
    do
    {
        cout<<"enter appropriate number \n"<<endl;
        cout<<"\n 1:add an item";
        cout<<"\n 2:display total value";
        cout<<"\n 3:delete an item";
        cout<<"\n 4:display all item.";
        cout<<"\n 5: quit..";
        cin>>x;
        switch(x)
     {
     case 1:order.getitem();
     break;
     case 2:order.displaysum();
     break;
     case 3:order.remove();
     break;
     case 4:order.displayitems();
     break;
     case 5:
     break;
     default:cout<<"error in input ..try again.."<<endl;
      }
}
while(x!=5);
return 0;
}
