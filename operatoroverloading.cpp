#include <iostream>//unary minus
using namespace std;
class test
{
    int a,b;
    public:
    void setdata(int a, int b)
    {
        this->a=a;
        this->b=b;
    }
    void operator -();
    void display();
};
void test::operator -()
{
    a=-a;
    b=-b;
}
void test::display()
{
    cout<<a<<" "<<b<<endl;
}
int main()
{
    test obj;
    obj.setdata(5,-6);
    -obj;//ob.operator-();
    obj.display();
}