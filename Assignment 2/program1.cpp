#include<iostream>
using namespace std;
struct Student
{
    string name;
    int rollno;
    string degree;
    char hostel;
    float currentcgpa;

    void adddetails(string n, int r, string d, char h, float gpa)
    {
        cout<<"Name is: "<<n<<endl<<"Roll no.: "<<r<<endl<<"Degree: "<<d<<endl<<"Hostel name: "<<h<<endl<<"Cgpa is: "<<gpa<<endl;
    }
    void updatedetailes(string n, int r, string d)
    {
        cout<<"Name is: "<<n<<endl<<"Roll no.: "<<r<<endl<<"Degree: "<<d<<endl;
    }
    void updateCGPA(float g)
    {
        cout<<"Updated cgpa is: "<<g<<endl;
    }
    void updateHostel(char hos)
    {
        cout<<"new hostel is: "<<hos<<endl;
    }
    void displaydetails(string n, int r, string d, char h, float gpa)
    {
        cout<<"Name is: "<<n<<endl<<"Roll no.: "<<r<<endl<<"Degree: "<<d<<endl<<"Hostel name: "<<h<<endl<<"Cgpa is: "<<gpa<<endl;   
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