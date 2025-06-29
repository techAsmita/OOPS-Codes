#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter number a: ";
    cin>>a; cout<<endl;
    if(a%2==0)
    {
        cout<<"even ";
    }
    else
    {
        cout<<"odd ";//using if-else.
    }

    int b;
    cout<<"enter number b: ";
    cin>>b; cout<<endl;
    (b%2==0)?cout<<"even":cout<<"odd";
}