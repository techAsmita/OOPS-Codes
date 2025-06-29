#include<iostream>
using namespace std;
class base
{
    public:
    virtual void show()=0;//pure virtual function. also called 
    //abstract class.
};
class derived: public base
{
    public:
    virtual void show()
    {
        cout<<"Hello world"<<endl;
    }
};
class derived2: public base
{
    public:
    void show()
    {
        cout<<"Welcome"<<endl;
    }
};
int main()
{
    base *p=new derived;
    p->show();
    derived2 d1;
    d1.show();
    p=&d1;
    d1.show();
}