#include<iostream>
using namespace std;
//constructors in abstract class
class abstractclass
{
    public:
    abstractclass()
    {
        cout<<"Abstract class constructor is called"<<endl;
    }
    virtual void show()=0;
};
class derived:public abstractclass
{
    public:
    derived()
    {
        cout<<"Derived constructor called"<<endl;
    }
    void show()
    {
        cout<<"Derived function called"<<endl;
    }
};
int main()
{
    derived d1;
    d1.show();
}