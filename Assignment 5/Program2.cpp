#include<iostream>
using namespace std;
class base
{
    protected:
    int a;
    public:
    void get(int x)
    {
        a=x;
        cout<<"a is : "<<a<<endl;
    }
};
class derived:public base
{
    protected:
    int c;
    public:
    void getc(int y)
    {
        c=y;
        cout<<"c is: "<<a+c<<endl;
    }

};
int main()
{
    derived d1;
    d1.get(10);
    d1.getc(20);
}