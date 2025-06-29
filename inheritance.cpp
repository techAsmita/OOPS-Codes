#include<iostream>//example of single inheritance.
using namespace std;
class base
{
    int rollnum;
    public:
    int marks;
    string name;
};
class child:public base//inherited publically 
{
    public:
    string subject;
};
int main()
{
    child c1;
    c1.name="Asmita";
    c1.marks=90;
    c1.subject="Maths";
    cout<<c1.subject<<" "<<c1.name<<" "<<c1.marks<<endl;
}