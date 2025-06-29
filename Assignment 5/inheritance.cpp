#include<iostream>
using namespace std;
class base
{
    public:
    base()
    {
        cout<<"constructing base"<<endl;
    }
    ~base()
    {
        cout<<"destructing base"<<endl;
    }
};
class child:public base
{
    public:
    child()
    {
        cout<<"constructing"<<endl;
    }
    ~child()
    {
        cout<<"destructing"<<endl;
    }
};
void fun()
{
    static child c1;//static object.
}
int main()
{
    cout<<"start main"<<endl;
    fun();
    cout<<"end main"<<endl;
}