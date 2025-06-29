#include<iostream>
using namespace std;
class def;//forward declaration
class abc
{
    int a;
    public:
    void num(int num1)
    {
        a=num1;
    }
    friend void sum(abc,def);
};
class def
{
    public:
    int b;
    public:
    void num2(int num2)
    {
        b=num2;
    }
friend void sum(abc h, def i);
};
void sum(abc h, def i)
{
    cout<<"The sum of data objects of class is: "<<h.a+i.b;

}
int main()
{
    abc m;
    m.num(10);
    def n;
    n.num2(100);
    sum(m,n);
}