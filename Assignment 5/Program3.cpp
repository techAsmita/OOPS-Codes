#include<iostream>
using namespace std;
class base
{
    protected:
    int a=10;
    int b=100;
    // public:
    // void getdata(int x, int y)
    // {
    //     a=x;
    //     b=y;
    // }
    // void sum()
    // {
    //     cout<<"The sum is: "<<a+b<<endl;
    // }
};
class derived:private base
{
    public:
    void display1()
    {
        cout<<"var a is: "<<a<<endl;
    }
};
class derived2:protected base
{
    public:
    void display2()
    {
        cout<<"var b is: "<<b<<endl;
    }
};

int main()
{
    derived d1;
    d1.display1();
    derived2 d2;
    d2.display2();
    
}