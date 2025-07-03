//protected modifier can be accessed only base class and child class
//but not by main function.
//class base
// class child:public base.

#include<iostream>
using namespace std;
class check
{
    private:
    void p1()
    {
        cout<<"This is private."<<endl;
    }
    public:
    void p2()
    {
        cout<<"This is public."<<endl;
        p1();
    }
};
class child:public check
{
    protected:
    void p3()
    {
        cout<<"This is protected class."<<endl;
    }
};
int main()
{
    check c1;
    // c1.p1();
    // declared private in class can't be accessed.
    c1.p2(); //declared public.
    // c1.p3(); //can't be called from parent class as it has.
    //no function corresponding to it.
    child c2;
    // c2.p3(); declared protected can't be accesed inside main
    // function.
    c2.p2();//child class inherited properties of parent.
    //so this works.
}