#include<iostream>
using namespace std;
//obj1+7
class test
{
    int a,b;
    public:
    test()
    {

    }
    test(int a)
    {
        this->a=a;
    }
    test operator+(int d)
    {
        test obj1;
        obj1.a=a+d;
        return obj1;
    }
    void show()
    {
        cout<<a<<" "<<endl;
    }
};
int main()
{
    test t1(10);
    test t2=t1+7;
    t2.show();
}