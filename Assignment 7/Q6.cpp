#include<iostream>
using namespace std;
class time1
{
    int a,b,c;
    public:
    time1()
    {

    }
    time1(int a, int b, int c)
    {
        this->a=a;
        this->b=b;
        this->c=c;
    }
    time1 operator+(time1 obj)
    {
        time1 h;
        h.a=a+obj.a;
        h.b=b+obj.b;
        h.c=c+obj.c;
        return h;
    }
    void disp()
    {
        cout<<a<<" "<<b<<" "<<c<<" "<<endl;
    }
};
int main()
{
    time1 t1(5,15,34);
    time1 t2(9,53,58);
    time1 t3=t1+t2;
    t3.disp();
}