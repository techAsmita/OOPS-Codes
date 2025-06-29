#include<iostream>
using namespace std;
class base
{
    public:
    virtual void show()
    {
        cout<<"I'm a new women."<<endl;
    }
};
class base2
{
    public:
    virtual void show()=0;
};
class derived:public base, public base2
{
    public:
    void show()
    {
        int a=10;
        int b=150;
        cout<<"Sum is: "<<a+b<<endl;
    }
};
int main()
{
    base *p=new base;
    p->show();
    base *p2=new derived;
    p2->show();
    derived *p1=new derived;
    p1->show();

}
