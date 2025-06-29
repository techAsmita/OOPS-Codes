#include<iostream>
using namespace std;
class loading
{
    public:
    void show(int a, int b)
    {
        cout<<"The value of a and b: "<<a<<" "<<b<<endl;
    }
    void show(int a, double b)
    {
        cout<<"The value of a and b: "<<a<<" "<<b<<endl;
    }
    void show(int a)
    {
        cout<<"The value of a: "<<a<<endl;
    }
};
int main()
{
    loading l1;
    l1.show(10,20);
    l1.show(10,15.5);
    l1.show(100);
}