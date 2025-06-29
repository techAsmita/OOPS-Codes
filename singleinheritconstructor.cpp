#include<iostream>
using namespace std;
//using constructors.
class parent
{
    protected:
    string name;
    int age;
    public:
    
    //making parametrized constructor
    parent(string name, int age)
    {
        this->name=name;
        this->age=age;
    }
    void display()
    {
        cout<<"Name is: "<<this->name<<endl<<"Age is: "<<this->age<<endl;
    }
    void work()
    {
        cout<<"i am working"<<endl;
    }
};
class child: public parent
{
    int rollno;
    float fees;
    public:
    child(string name, int age, int r, float f): parent(name, age)
    {
        rollno=r;
        fees=f;
    }
    void display()
    {
        cout<<name<<" "<<age<<" "<<rollno<<" "<<fees<<endl;
    }

};
int main()
{
    child c1("akshita", 35, 102303115, 10053.45);
    c1.display();
    
}