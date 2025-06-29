#include<iostream>
using namespace std;
class test
{
    int a;
    int b;
    public:
    test(int x, int y)
    {
        a=x;
        b=y;
        cout<<"The value of x and y are: "<<a<<" "<<b<<endl;
    }
    ~test()
    {
        cout<<"destructor is called"<<endl;
    }
};
int main()
{
    test t1(10,20);
    test t2(2,3);
    test t7(2,37);
    test t3(2,3);
    test t4(20,3);
    test t5(2,9);
    test t6(26,3);
}