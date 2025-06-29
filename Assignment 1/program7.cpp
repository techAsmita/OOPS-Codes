#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter values of a and b: ";
    cin>>a >> b;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"the values are now swapped: "<<a << b;
}