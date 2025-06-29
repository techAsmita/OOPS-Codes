#include<iostream>
using namespace std;
class Rectangle
{
    int length;
    int breadth;
    public:
    Rectangle()
    {
        length=0;
        breadth=0;
    }
    Rectangle(int length, int breadth)
    {
        this->length=length;
        this->breadth=breadth;
    }
    Rectangle(int l)
    {
        length=l;
        breadth=l;
    }
    void printarea()
    {
        cout<<"Area is : "<<length*breadth<<endl;
    }

    
};
int main()
{
    // Rectangle r1(20);
    // r1.printarea();
    // Rectangle r2(100,20);
    Rectangle r3(10);
    //r2.printarea();
    r3.printarea();

}