#include<iostream>
using namespace std;
class Student
{
    private:
    string name;
    int rollno;
    public:
    string degree;
    char hostel;
    float currentcgpa;

    void adddetails(string n, int r, string d, char h, float gpa)
    {
        name=n;
        rollno=r;
        cout<<"Name is: "<<name<<endl<<"Roll no.: "<<rollno<<endl<<"Degree: "<<d<<endl<<"Hostel name: "<<h<<endl<<"Cgpa is: "<<gpa<<endl;
    }
    void updatedetailes(string m, int roll, string d)
    {
        name=m;
        rollno=roll;
        cout<<"Name is: "<<name<<endl<<"Roll no.: "<<roll<<endl<<"Degree: "<<d<<endl;
    }
    void updateCGPA(float g)
    {
        cout<<"Updated cgpa is: "<<g<<endl;
    }
    void updateHostel(char hos)
    {
        cout<<"new hostel is: "<<hos<<endl;
    }
    void displaydetails(string o, int p, string d, char h, float gpa)
    {
        name=o;
        rollno=p;
        cout<<"Name is: "<<name<<endl<<"Roll no.: "<<rollno<<endl<<"Degree: "<<d<<endl<<"Hostel name: "<<h<<endl<<"Cgpa is: "<<gpa<<endl;   
    }
};
int main()
{
    Student s1;
    s1.adddetails("Asmita",102303115,"btech",'Q',8.5);
    s1.updatedetailes("Akshita",123,"betch");
    s1.updateCGPA(9.5);
    s1.updateHostel('A');
    s1.displaydetails("Anushka",1023,"btech",'Q',8.77);
}