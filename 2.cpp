//conditional statments.
#include<iostream>
using namespace std;
int main()
{
    int age1=16;
    bool paid=false;
    cout<<"The current age is:"<<age1<<endl;
    if(age1>=18)
    {
        cout<<"Adult"<<endl;
    }
    else
    {
        cout<<"Not adult"<<endl;
    }

    //switch case same as java.
    int age;
    cin>>age;
    switch(age)
    {
        case 1:
        cout<<"Yaay 1st birthday";
        break;
        case 15:
        cout<<"Yaay 15th birthday";
        break;
        case 5:
        cout<<"Yaay 5th birthday";
        break;
        case 20:
        cout<<"Yaay 20th birthday";
        break;
        default:
        cout<<"Error!!!";
        break;
    }
    // loops
    int i=1;
    do
    {
       cout<<"My gift is ps5"<<endl;
       i++;
    } while (i<=10);
    
    cout<<"The loop has ended!!"<<endl;

    for(int i=0;i<=100;i++)
    {
        cout<<i<<endl;
        if(i>=50)
        {
            break;
        }
    }
    // goto statment is used to skip that part of program and go the desired label
    for(int i=0;i<20;i++)
    {
        cout<<"The val of i changes to:"<<i<<endl;
        if(i>=15)
        {
            goto mylabel;
        }
    }
    mylabel:
    cout<<"Execution stopped here"<<endl;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(i%2==0)
            {
                break;
            }
        cout<<"*"<<endl;
        }
    }
    // arrays vs list
    int rolls[]={12,13,4,54,3,53,35,45,43,22};
    int s=sizeof(rolls)/sizeof(rolls[0]);
    for(int i=0;i<s;i++)
    {
        cout<<rolls[i]<<endl;
    }
    cout<<rolls[0];
    string n="Asmita";
    int size=sizeof(n)/sizeof(n[0]);
    for(int i=0;i<size;i++)
    {
        cout<<n[i]<<endl;
    }
}