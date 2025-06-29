#include<iostream>
using namespace std;
class triangle
{
    double base,height;
    public:
    triangle(int b, int h)
    {
        base=b;
        height=h;
    }
    friend double compareArea(triangle &t1,triangle &t2);
};
double compareArea(triangle &t1, triangle &t2)
{
    double area1=1/2*t1.base*t1.height;
    double area2=1/2*t2.base*t2.height;

    if(area1>area2)
    return area1;
    else
    return area2;
}
int main()
{
    triangle l1(30.5,76.5);
    triangle l2(35.9,80.9);
    compareArea(l1,l2);
}