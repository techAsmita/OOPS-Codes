//pre and post using friend function
#include<iostream>
using namespace std;
class test
{
    int a,b;
    public:
    test()
    {
        a=10;b=12;
    }
    friend test operator++(test);
    friend test operator++(test,int);
    void display()
    {
        cout<<a<<" "<<b<<endl;
    }
};
test operator++(test t2)
{
    t2.a=++t2.a;
    t2.b=++t2.b;
    return t2;
}
test operator++(test t3,int)
{
    t3.a++;
    t3.b++;
    return t3;
}
int main()
{
    test t2,t3;
    t2=++t2;
    t2.display();
    t3=t3++;
    t3.display();

}