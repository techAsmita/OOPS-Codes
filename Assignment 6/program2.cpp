#include<iostream>
using namespace std;
class Base
{
    public:
    int a,b;
    void getdata(int a, int b)
    {
        this->a=a;
        this->b=b;
    }
};
class Derived:public Base
{
    public:
    void sum()
    {
        cout<<"The sum is: "<<a+b<<endl;
    }
};
int main()
{
    Derived *d1=new Derived;
    d1->getdata(10,20);
    d1->sum();
    delete d1;
}