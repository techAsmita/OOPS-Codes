#include<iostream>
using namespace std;
class rectangle
{
    int length;
    int breadth;
    public:
    rectangle(int l, int b)
    {
        this->length=l;
        this->breadth=b;
    }
    void area()
    {
        cout<<"The area of the rectangle: "<<length*breadth<<endl;
    }
    ~rectangle()
    {
        cout<<"Destructor is called"<<endl;
    }
};
int main()
{
    rectangle r1(20.0,30);
    r1.area();
    rectangle r2(90,36);
    r2.area();
}