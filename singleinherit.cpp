#include<iostream>//single inheritance.
using namespace std;
class base
{
    int a,b;
    public:
    void set1(int x, int y)
    {
        a=x;
        b=y;

    }
    void showa()
    {
        cout<<"Value of a and b is: "<<a<<" "<<b<<endl;
    }
};
class derived: public base
{
    int k;
    public:
    void set(int y)
    {
        k=y;
    }
    void show()
    {
        cout<<"The value of k is: "<<k<<endl;
    }
};
int main()
{
    derived ob1;
    ob1.set(10);//member function of derived
    ob1.set1(20,100);//member function of base
    ob1.showa();//member function of base
    ob1.show();//member function of derived
}
