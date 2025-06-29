#include<iostream>
using namespace std;
class Student
{
    string name;
    int rno;
    float cgpa;
    public:
    Student(string n, int rno, float gpa)
    {
        this->name=n;
        this->rno=rno;
        this->cgpa=gpa;
    }
    void print()
    {
        cout<<"Name is: "<<name<<" "<<cgpa<<" "<<rno<<endl;
    }

};
int main()
{
    Student *s1 = new Student("Akshita", 1234, 8.9);
    s1->print();
    delete s1;
    Student *srr = new Student[2]{Student("Asmita", 567, 9.9), Student("Akshita", 89, 9.8)};
    for (int i = 0; i < 2; i++) 
    {
        srr[i].print();
    }
    // delete[] srr;
    // int *j=new int(90);
    // cout<<*j<<endl;
    // delete j;
    // float *a=new float(10.5);
    // cout<<*a<<endl;
    // delete a;
    // int *arr= new int[4];
    // for(int i=0;i<4;i++)
    // {
    //     cin>>arr[i];
    // }
    // for(int i=0;i<4;i++)
    // {
    //     cout<<arr[i];
    // }
    // delete[] arr;
    float *brr=new float[5];
    for(int i=0;i<5;i++)
    {
        cin>>brr[i];
    }
    for(int i=0;i<4;i++)
    {
        cout<<brr[i]<<endl;;
    }
    cout<<"\n";
    delete[] brr;


}