#include<iostream>
using namespace std;
class test
{
    int a;
    int b;
    public:
    test(int x=20, int y=135)
    {
        a=x;
        b=y;
    }
    void getdata(int a, int b)
    {
        this->a=a;
        this->b=b;
    }
    void sum()
    {
        cout<<a+b;cout<<endl;
    }

};
int main()
{
    test t1,t2;
    t1.getdata(10,20);
    t1.sum();
    t2.getdata(100,120);
    t2.sum();
    // int i=20;
    // int *p=&i;
    // cout<<p<<" "<<*p;
    test *p1=new test(120);
    (*p1).sum();

}