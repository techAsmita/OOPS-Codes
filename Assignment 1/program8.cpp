#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of days the member is late to return the book: ";
    cin>>n; cout<<endl;
    if(n==5)
    {
        cout<<"the fine is 50 paise";
    }
    else if(n>5&&n<11)
    {
        cout<<"the fine is 1 rupee";
    }
    else if(n>10&&n<31)
    {
        cout<<"the fine is 5 rupees";
    }
    else if(n>30)
    {
        cout<<"your membership will be canceled";

    }
    else
    {
        cout<<"invalid";
    }
}