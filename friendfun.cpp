#include<iostream>//friend of more than one class.
using namespace std;
class sum2;
class sum
{
    int a,b;
    public:
    sum(int a, int b)
    {
        this->a=a;
        this->b=b;
    }
    friend void disp(sum,sum2);
};
class sum2
{
    int c;
    public:
    sum2(int c)
    {
        this->c=c;
    }
    friend void disp(sum,sum2);
};
void disp(sum s1, sum2 t1)
{
    cout<<s1.a+s1.b+t1.c<<endl;
}
int main()
{
    sum s1(10,20); sum2 t1(90);
    disp(s1,t1);
}