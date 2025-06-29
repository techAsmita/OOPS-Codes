#include<iostream>
using namespace std;
class base
{
    protected:
    int a,b;
    base()
    {

    }
    base(int x, int y)
    {
        a=x;
        b=y;
    }
    ~base()
    {
        cout<<"Parent destructor called"<<endl;
    }
};
class derived:public base
{
    public:
    int c;
    derived(int a, int b, int c)
    {
        this->a=a;
        this->b=b;
        this->c=c;
    }
    void d()
    {
        cout<<a<<", "<<b<<", "<<c<<endl;
    }
    ~derived()
    {
        cout<<"child Destructor called"<<endl;
    }
};
int main()
{
    derived d1(10,20,30);
    d1.d();
    //child destructor called first then parent.
}
