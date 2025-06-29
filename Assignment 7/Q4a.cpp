//arithmetic operators all +,-,/,*.
#include<iostream>
using namespace std;
class complex 
{
    int a, b;
    public:
    complex()
    {

    }
    complex(int c, int d)
    {
        a=c;
        b=d;
    }
    // complex operator +(complex obj)
    // {
    //     complex h;
    //     h.a=a+obj.a;
    //     h.b=b+obj.b;
    //     return h;
    // }
    friend complex operator /(complex,complex);
    void sum()
    {
        cout<<a<<" "<<b<<endl;
    }
};
complex operator /(complex r, complex i)
{
    complex h;
    h.a=r.a/i.a;
    h.b=r.b/i.b;
    return h;
}
int main()
{
    complex c1(106,15);
    complex c2(105,12);
    complex c3=operator/(c1,c2);
    c3.sum();

}