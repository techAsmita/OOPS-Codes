#include<iostream>
using namespace std;
int main(){
    int a,b;
    char c;
    cout<<"enter numbers a and b: ";
    cin>>a >> b; cout<<endl;
    cout<<"enter operation you want to perform: ";
    cin>>c; cout<<endl;
    switch(c)
    {
        case '+':
        cout<<"add is: "<<a+b;
        break;
        case '-':
        cout<<"sub is: "<<a-b;
        break;
        case '*':
        cout<<"multiply is: "<<a*b;
        break;
        case '/':
        cout<<"div is: "<<a/b;
        break;
        default:
        cout<<"invalid input try again";
    }
}