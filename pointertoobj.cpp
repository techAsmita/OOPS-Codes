#include <iostream>
using namespace std;
class pointer
{
    int a;
    public:
    void disp()
    {
        a=10;
        cout<<"The value of a: "<<a<<endl;
    }
};
int main()
{
    pointer p1;
    p1.disp();
    pointer *p;
    p=&p1;
    p->disp();
}