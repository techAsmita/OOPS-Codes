#include<iostream>//unary minus
using namespace std;
class test
{
    int a; int b;
    public:
    test(int a, int b)
    {
        this->a=a;
        this->b=b;
    }
    void operator-()
    {
        a=-a;
        b=-b;
    }
    void disp()
    {
        cout<<a<<" "<<b<<endl;
    }
};
int main()
{
    test t1(10,20);
    -t1;
    t1.disp();
}
