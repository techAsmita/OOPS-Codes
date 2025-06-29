//example of inheritance
#include<iostream>
using namespace std;
class Teacher
{
    public:
    int a;
    int b;
    Teacher()//constructor can't be private
    {
        a=30;
        b=20;
    }
    void add()
    {
        cout<<a+b<<endl;
    }

};
class Student: public Teacher
{
    public:
    Student()
    {
        cout<<"c is: "<<a+b<<endl;
    }

};
int main()
{
    Teacher t1;
    t1.add();
    Student s1;
}