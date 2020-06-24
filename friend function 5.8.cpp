#include<iostream>
using namespace std;
class sample
{
    int a,b;
public:
    void setvalue(){a=22;b=44;}
    friend float mean(sample s);
};
float mean(sample s)
{
    return float(s.a+s.b)/2;
}
int main()
{
    sample x;
    x.setvalue();
    cout<<"mean value="<<mean(x)<<"\n";

    return 0;
}
