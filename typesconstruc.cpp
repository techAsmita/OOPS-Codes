#include<iostream>//different types of constructor
using namespace std;
class student
{
    int roll;
    string name;
    public:
    student()
    {
        roll=115;
        name="asmita";
    }
    student(student &a)
    {
        roll=a.roll;
        name=a.name;
    }
    student(int r, string n)
    {
        roll=r;
        name=n;
    }
    void print()
    {
        cout<<name<<" "<<roll<<endl;
    }
};
int main()
{
    student s1;
    student s2(113,"abc");
    student s3(115,"bcg");
    s1.print();
    s2.print();
    s3.print();
    student s4=s2;//copy 
    s4.print();
    student s5(s1);
    s5.print();
}