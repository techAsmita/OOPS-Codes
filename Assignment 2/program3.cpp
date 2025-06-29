#include<iostream>
using namespace std;
class test
{
    int a;
    int b;
    public:
    void getdata(int x, int y)
    {
        a=x;
        b=y;
    }
    void printsum();

};
void test:: printsum()
{
    cout<<"The sum is: "<<a+b<<endl;

}
int main()
{
    test t1,t2;
    t1.getdata(10,200);
    t2.getdata(12,156);
    t1.printsum();
    t2.printsum();
}