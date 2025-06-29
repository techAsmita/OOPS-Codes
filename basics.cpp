#include<iostream>
using namespace std;
class abc//use of this keyword.
{
    int a;
    int b;
    public:
    abc(int a,int b)
    {
        this->a=a;
        this->b=b;
    }
    void printsum();
};
void abc::printsum()
{
    cout<<"The sum is: "<<a+b<<endl;
}

int main()
{
//a good thing to do
// cout<<4<<endl; cout<<"4\n"; cout<<4+3<<endl; cout<<"4+3\n";
// float a=3.9;
// int b=10; float c=a/b;
// cout<<c;
abc s(10,20);
s.printsum();

}