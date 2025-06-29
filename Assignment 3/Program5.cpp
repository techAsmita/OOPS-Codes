#include<iostream>
using namespace std;
class rectangle
{
    int l;
    int b;
    public:
    rectangle(int l, int b)
    {
        this->l=l;
        this->b=b;
        cout<<"The length and breadth is: "<<l<<" "<<b;cout<<endl;
    }
    void showdata()
    {
        cout<<"The area is: "<<l*b;cout<<endl;
    }
};
int main()
{
    //array of objects
    rectangle r[5]={rectangle(20,30),rectangle(14,56),rectangle(16,40),rectangle(90,100),rectangle(80,5)};
    for(int i=0;i<5;i++)
    {
        r[i].showdata();
    }
}
