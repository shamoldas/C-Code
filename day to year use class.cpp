#include<iostream>
using namespace std;
class year
{
    int day,y;
public:
    void getday(int d){day=d;}
    void putday(void)
    {
        cout<<day;
        cout<<y;
    }
    void sum(year);
};
void year::sum(year y1)
{
    day=y1.day;
    y=day/365;
    y=y+y1.day;
}
int main()
{
    year s,r;
    s.getday(456);
    r.sum(s);
    r.putday();

    return 0;
}
