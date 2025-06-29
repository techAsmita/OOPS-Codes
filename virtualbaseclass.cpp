#include<iostream>
using namespace std;
//to avoid ambiguity
class student
{
    protected:
    int rollno;
    public:
    void setnumber(int a)
    {
        rollno=a;
    }
    void print()
    {cout<<"Roll number is: "<<rollno<<endl;}

};
class test:virtual public student
{
    protected:
    float marks;
    public:
    void setn(float m)
    {
        marks=m;
    }
    void printm()
    {
        cout<<"marks is: "<<marks<<endl;
    }
};
class sports:virtual public student
{
    protected:
    float score;
    public:
    void getscore(float score)
    {
        this->score=score;
    }
    void show() 
    {
        cout<<"score is: "<<this->score<<endl;}
};
class result: public test, public sports
{
    float total;
    public:
    void display()
    {
        total=rollno+marks+score;
        print();
        printm();
        show();
        cout<<"your total is: "<<total<<endl;
    }

};
int main()
{
    result r1;
    r1.setnumber(10);
    r1.setn(99.8);
    r1.getscore(100);
    r1.display();
}
//to resolve ambiguity, we use virtual base functions and classes