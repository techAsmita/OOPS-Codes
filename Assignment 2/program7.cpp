#include<iostream>
using namespace std;
namespace m
{
    int a=10;
    int value()
    {
        {return a;}
    }

}
namespace n
{
    int b=20;
    int val2()
    {
        {return b;}   
    }
}
int main()
{
    cout<<m::value()<<endl;
    cout<<n::val2()<<endl;
}