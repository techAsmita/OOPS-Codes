//relational operator ==
#include<iostream>
using namespace std;
class test
{
    int a,b;
    public:
    test()
    {

    }
    test(int a, int b)
    {
        this->a=a;
        this->b=b;
    }
    void operator==(test obj)
    {
        if(a==obj.a&&b==obj.b)
        {
            cout<<"they are equal"<<endl;
        }
        else
        {
            cout<<"not equal"<<endl;
        }
    }
};
int main()
{
    test t1(10,20);
    test t2(10,20);
    t1==t2;
}