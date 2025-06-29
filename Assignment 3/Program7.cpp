#include<iostream>
using namespace std;
class test
{
    public:
    int a;
    int b;
    void swap1(int x, int y)//value shallow copy 
    {
        cout<<"before swapping is: "<<x<<" "<<y<<endl;
        int temp=x;
        x=y;
        y=temp;
        cout<<"after swapping is: "<<x<<" "<<y<<endl;

    }
    void swap(int *x, int *y)//pointer
    {
        cout<<"before swapping: "<<*x<<" "<<*y;cout<<endl;
        int temp=*x;
        *x=*y;
        *y=temp;
        cout<<"after swapping: "<<*x<<" "<<*y<<endl;
    }
    void swap3(int &x, int &y)//reference
    {
        cout<<"before swapping: "<<x<<" "<<y;cout<<endl;
        int temp=x;
        x=y;
        y=temp;
        cout<<"after swapping: "<<x<<" "<<y<<endl;;
    }

};
int main()
{
    test t1;
    t1.swap1(1,2);//pass by value
    int a=20;
    int b=300;
    t1.swap(&a,&b);//pass by address
    t1.swap3(a,b);
}