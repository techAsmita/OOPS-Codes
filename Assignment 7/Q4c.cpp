#include<iostream>
using namespace std;
class test
{
    int a;
    public:
    test(int a)
    {
        this->a=a;
    }
    bool operator<=(test obj)
    {
        if(a<=obj.a)
        {
            return 1;
        }
        else
        return 0;
    }
};
int main()
{
    test t1(10);
    test t2(20);
    if(t1<=t2)
    {
        cout<<"t2 is greater"<<endl;
    }
    else
    {
        cout<<"t1 is greater"<<endl;
    }
}