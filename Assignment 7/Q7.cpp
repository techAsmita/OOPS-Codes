#include<iostream>
using namespace std;
class test
{
    int a, b;
    public:
    test(int a, int b)
    {
        this->a=a;
        this->b=b;
    }
    friend void operator-(test &h);
    void display()
    {
        cout<<a<<" "<<b<<endl;
    }
};
void operator-(test &h)
{
    h.a=-h.a;
    h.b=-h.b;
}
int main()
{
    test t1(12,-53);
    operator-(t1);
    t1.display();
}