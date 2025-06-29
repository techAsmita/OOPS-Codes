#include<iostream>
using namespace std;
class complex
{
    int r, i;
    public:
    complex()
    {

    }
    complex(int r, int i)
    {
        this->r=r;
        this->i=i;
    }
    complex operator+(complex const &obj)
    {
        complex c;
        c.r=r+obj.r;
        c.i=i+obj.i;
        return c;
    }
    void display()
    {
        cout<<r<<"+i"<<i<<endl;
    }
};
int main()
{
    complex c1(10,20);
    complex c2(20,30);
    complex c3=c1+c2;
    c3.display();
}
