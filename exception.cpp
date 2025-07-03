#include<iostream>
using namespace std;
int main()
{
    float a;
    float b;
    cin>>a>>b;
    try
    {
        if(b!=0)
        {
            cout<<"Division possible:"<<a/b<<endl;
        }
        else
        {
            throw "error by 0";
        }
    }
    catch(string e)
    {
        cout<<"Error occured: "<<e<<endl;
    }
    
    // try
    // {
    //     int age=20;
    //     if(age>=18)
    //     {
    //         cout<<"Welcome!";
    //     }
    //     else
    //     {
    //         throw 404;
    //     }
    // }
    // catch(int error)
    // {
    //     cout<<"Acess not available!!"<<endl;
    //     cout<<"Error "<<error;
    // }
    
}