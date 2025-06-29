#include<iostream>
using namespace std;
class Person
{
    protected:
    string name;
    string address;
    public:
    void getdata(string name, string address)
    {
        this->name=name;
        this->address=address;
    }
};
class Staff:virtual public Person
{
    protected:
    int employee_id;
    string department;
    public:
    Staff()
    {

    }
    Staff(int emp, string depart, string n, string add)
    {
        employee_id=emp;
        department=depart;
        name=n;
        address=add;
    }
    void display1()
    {
        cout<<"Id is: "<<employee_id<<", "<<"department is: "<<department<<", "<<"name is: "<<name<<", "<<"address is: "<<address<<endl;
    }
};
class Student:virtual public Person
{
    public:
    int student_id;
    string grade;
    Student()
    {

    }
    Student(string name, string address, int stu, string g)
    {
        this->name=name;
        this->address=address;
        student_id=stu;
        grade=g;
    }
    void display2()
    {
        cout<<"Id is: "<<student_id<<", "<<"grade is: "<<grade<<", "<<"name is: "<<name<<", "<<"address is: "<<address<<endl;
    }
};
class TeachingAssistant:public Staff, public Student
{
    public:
    TeachingAssistant(string name, string address, int id, string department, string grade, int student)
    {
        this->name=name;
        this->address=address;
        employee_id=id;
        this->department=department;
        this->grade=grade;
        student_id=student;
    }
    void showdetails();
};
void TeachingAssistant::showdetails()
{
    cout<<"Id is: "<<student_id<<", "<<"grade is: "<<grade<<", "<<"name is: "<<name<<", "<<"address is: "<<address<<", "<<"emp id is: "<<employee_id<<", and"<<"department is: "<<department<<endl;   
}

int main()
{
    Staff ob1(123,"manager","abc","def");
    ob1.display1();
    cout<<endl;
    Student s3("dgh","bhid",346,"A");
    s3.display2();
    cout<<endl;
    TeachingAssistant a1("akshita","abdgf",4567,"ceo","A",12590);
    a1.showdetails();
}