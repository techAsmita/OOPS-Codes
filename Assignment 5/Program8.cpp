#include<iostream>
using namespace std;
class LibraryUser
{
    protected:
    string name;
    int ID;
    int contact;
    public:
    void details(string n, int i, int c)
    {
        name=n;
        ID=i;
        contact=c;
    }
};
class Student:public LibraryUser
{
    public:
    int gradelev;
    Student(int g, string name, int ID, int contact)
    {
        this->gradelev=g;
        this->name=name;
        this->ID=ID;
        this->contact=contact;
    }
    void disp()
    {
        cout<<name<<" "<<gradelev<<" "<<ID<<" "<<contact<<endl;
    }
};
class Teacher: public LibraryUser
{
    public:
    string department;
    Teacher(string d, string na, int j, int c)
    {
        department=d;
        name=na;
        ID=j;
        contact=c;
    }
    void show()
    {
        cout<<name<<" "<<department<<" "<<ID<<" "<<contact<<endl;
    }
};

int main()
{
    Student s1(10,"asmita",12345,876893928);
    s1.disp();
    Teacher t1("economics","arpita",7377,73672883);
    t1.show();
}