#include<iostream>//polymorphism binding with function overloading
using namespace std;
void print(int a)
{
    cout<<"The value of a is: "<<a<<endl;
}
void print(double b)
{
    cout<<"The value of b is: "<<b<<endl;
}
void print(string d, int e, double f)
{
    cout<<"a is: "<<d<<" "<<"b is: "<<e<<" "<<"c is: "<<f<<endl;
}
int main()
{
    print(100);
    print(90.8);
    print("Asmita",40,18.9);
}