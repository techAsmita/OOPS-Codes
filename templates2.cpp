//class template with non type parameter
#include<iostream>
using namespace std;
template<class T,int size>
class test
{
    T a,b;
    public:
    test(T x, T y)
    {
        a=x;
        b=y;
    }
    void disp()
    {
        cout<<a<<" "<<b<<" "<<size<<endl;
    }
};
int main()
{
    test<int,10>t1(20,30);
    test<string,20>t2("abc","cd");
    t1.disp();
    t2.disp();
}