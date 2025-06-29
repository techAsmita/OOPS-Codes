#include<iostream>
using namespace std;
class Rectangle
{
    int l;
    int b;
    public:
    Rectangle()
    {
        l=0;b=0;
    }
    Rectangle(int length, int breadth)
    {
        l=length;
        b=breadth;
    }
    Rectangle(int l=20)
    {
        this->l=l;
        this->b=l;
    }
    ~Rectangle()
    {
        cout<<"destructor is called"<<endl;
    }
    void printarea()
    {
        cout<<"Area is: "<<l*b<<endl;
    }

};
int main()
{
    Rectangle r1[1]={Rectangle(1,2)};
    for(int i=0;i<1;i++)
    {
        r1[i].printarea();
    }
    Rectangle r2[2]={Rectangle(10,20),Rectangle(100,120)};
    for(int i=0;i<2;i++)
    {
        r2[i].printarea();
    }
    Rectangle r3[3]={Rectangle(5,6),Rectangle(6,7),Rectangle(10,12)};
    for(int i=0;i<3;i++)
    {
        r3[i].printarea();
    }



}