#include<iostream>
using namespace std;
class test1
{
    int a,b;
    public:
    void data(int c,int d)
    {
        a=c;
        b=d;
    }
    void show()
    {
        cout<<a<<" "<<b;cout<<endl;
    }
    friend class test2;   
};
class test2
{
    public:
    void sum(test1 t1)
    {
        cout<<t1.a+t1.b;cout<<endl;
    }
};
int main()
{
    test1 num1;
    num1.data(25,30);
    num1.show();
    test2 num2;
    num2.sum(num1);
}