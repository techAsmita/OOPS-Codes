#include<iostream>//single inheritance
using namespace std;
class base
{
    protected:
    string name;
    int age;
    public:
    void getdata(string name, int age)
    {
        this->name=name;
        this->age=age;
    }
    void display()
    {
        cout<<"The name is: "<<name<<","<<"The age is: "<<age<<endl;
    }
};
class derived:public base
{
    public:
    float marks;
    derived(string name, float marks, int age)
    {
        this->name=name;
        this->marks=marks;
        this->age=age;
    }
    void display2();

};
void derived::display2()
{
    cout<<"The name is :"<<name<<", "<<"Marks is: "<<marks<<", "<<"age is: "<<age<<endl;
}

//multilevel inheritance
class grandfather
{
    protected:
    string name;
    void get(string n)
    {
        name=n;
    }
};
class parent:public grandfather
{
    public:
    int salary;
    void sal(int salary)
    {
        this->salary=salary;
    }

};
class child: public parent
{
    public:
    string hobby;
    void h(string hob)
    {
        hobby=hob;
    }
    child(string name, string hobby, int salary)
    {
        this->name=name;
        this->hobby=hobby;
        this->salary=salary;
    }
    void print()
    {
        cout<<name<<", "<<salary<<", "<<hobby<<endl;
    }
};

//multiple inheritance
class engineer
{
    protected:
    string degree;
    void a(string d)
    {
        degree=d;
    }
};
class youtuber
{
    protected:
    float subscribers;
    void s(float subs)
    {
        subscribers=subs;
    }
};
class person:public engineer, public youtuber
{
    public:
    person(string degree, float subscribers)
    {
        this->degree=degree;
        this->subscribers=subscribers;
    }
    void printdata();
};
void person::printdata()
{
    cout<<"degree is: "<<degree<<", "<<"subscribers is: "<<subscribers<<endl;
}

//hierarchical inheritance
class human
{
    protected:
    string name;
    int age;
    public:
    // human()
    // {

    // }
    void display()
    {
        cout<<"name is: "<<name<<","<<"age is: "<<age<<endl;
    }
};
class employee:public human
{
    public:
    int salary;
    employee(string name, int age, int salary)
    {
        this->name=name;
        this->salary=salary;
        this->age=age;
    }
};
class teacher: public human
{
    public:
    string subject;
    teacher(string n, string subject, int age)
    {
        name=n;
        this->age=age;
        this->subject=subject;
    }
    void show()
    {
        cout<<name<<" "<<age<<" "<<subject<<endl;
    }
};

//hybrid inheritance
class student
{
    protected:
    string name;
    string gender;
    public:
    void get()
    {
        cout<<name<<" "<<gender<<endl;
    }
};
class male
{
    public:
    string hobby;
    void m()
    {
        cout<<"my hobby is: "<<hobby<<endl;
    }
};
class female 
{
    public:
    string degree;
    void show()
    {
        cout<<"my degree is: "<<degree<<endl;
    }
};
class boy: public student, public male
{
    public:
    int age;
    boy(string name, string gender, string hobby, int age)
    {
        this->name=name;
        this->gender=gender;
        this->hobby=hobby;
        this->age=age;
    }
    void displaydata()
    {
        cout<<"The name is: "<<name<<", "<<"Age is: "<<age<<", "<<"gender is: "<<gender<<", "<<"hobby is: "<<hobby<<endl;

    }

};
class girl:public student, public female
{
    public:
    string hairtype;
    girl(string name, string hairtype, string degree, string gender)
    {
        this->name=name;
        this->hairtype=hairtype;
        this->gender=gender;
        this->degree=degree;
    }
    void showdata()
    {
        cout<<name<<" "<<degree<<" "<<hairtype<<" "<<gender<<endl;
    }
};


int main()
{
    derived d1("asmita", 98.5, 19);
    d1.display();
    d1.display2();

    cout<<endl;

    child *c1=new child("akshita","basketball",100000);
    c1->print();

    cout<<endl;

    person p1("btech",19.9);
    p1.printdata();

    cout<<endl;

    teacher t1("arpita","maths",39);
    t1.show();

    cout<<endl;

    boy b1("Ram","Male","Gaming",20);
    b1.displaydata();
    girl g1("Asmita","Long straight","Btech","Female");
    g1.showdata();
}