//overloading function templates
#include<iostream>
using namespace std;
template<class T1,class T2>
void show(T1 a, T2 b)
{
    cout<<"template function called"<<endl;
    cout<<a<<" "<<b<<endl;
}
void show(int a, int b)
{
    cout<<"normal function called"<<endl;
    cout<<a<<" "<<b<<endl;
}
int main()
{
    show("hello",90);
    show(3,3);
}