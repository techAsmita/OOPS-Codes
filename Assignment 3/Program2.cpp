#include<iostream>
using namespace std;
class Swap2;
class Swap1
{
    int a;
    public:
    void m(int num1)
    {
        a=num1;
    }
    friend void swap(Swap1,Swap2);
};
class Swap2
{
    int b;
    public:
    void n(int num2)
    {
        b=num2;
    }
friend void swap(Swap1 , Swap2 );
};
void swap(Swap1 h, Swap2 i)
{
    cout<<"Before swapping:"<<h.a<<" "<<i.b;
    cout<<endl;
    int temp=h.a;
    h.a=i.b;
    i.b=temp;
    cout<<"The numbers swaped are:"<<h.a<<" "<<i.b;
}
int main()
{
    Swap1 first;
    first.m(121);
    Swap2 second;
    second.n(21);
    swap(first,second);
}