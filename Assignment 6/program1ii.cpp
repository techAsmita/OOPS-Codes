#include<iostream>
using namespace std;
class base
{
    public:
    virtual void show()
    {
        cout<<"Base class called"<<endl;
    }
};
class derived: public base
{
    public:
    void show()
    {
        cout<<"Child class called"<<endl;
    }
};
int main()
{
    base b1;
    b1.show();
    derived d1;
    d1.show();
    base *p;
    p=&b1;
    p->show();
    p=&d1;
    p->show();
}