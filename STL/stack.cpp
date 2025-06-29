#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(109);
    s1.push(100);
    cout<<s1.top()<<endl;
    s1.pop();
    cout<<s1.top()<<endl;
    cout<<"empty:"<<s1.empty()<<endl;
    while(!s1.empty())
    {
        cout<<s1.top()<<" ";
        s1.pop();
    }
}