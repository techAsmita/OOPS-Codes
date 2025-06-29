#include<iostream>//binary operator
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
    test operator +(test obj)
    {
        test obj1;
        obj1.a=a+obj.a;
        obj1.b=b+obj.b;
        return obj1;
    }
    void show();

};
void test::show()
{
    cout<<a<<" "<<b<<endl;
}
int main()
{
    test t1(10,90);
    test t2(20,45);
    test t3=t1+t2;
    t3.show();
}