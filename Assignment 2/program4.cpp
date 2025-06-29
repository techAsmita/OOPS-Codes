#include<iostream>
using namespace std;
class Rectangle
{
    int w;
    int h;
    public:
    void getdata(int x,int y)
    {
        w=x;
        h=y;
        cout<<"The width and height of rectangle is: "<<w<<" "<<h<<endl;
    }
    void calculatearea()
    {
        int area=w*h;
        cout<<"The area is: "<<area<<endl;
    }

};
int main()
{
    Rectangle r1;
    r1.getdata(120,34);
    r1.calculatearea();
}