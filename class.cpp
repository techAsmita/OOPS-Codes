#include<iostream>
using namespace std;
enum myCustvar
{
    monday=20,
    tuesday=12,
};
// by default structure is public and class is private;
struct student
{
    string name;
    float marks;
};
struct Student
{
    string Name;
    int id;
    int marks[3];

    float avgmarks(const Student &s)
    {
        return (s.marks[0]+s.marks[1]+s.marks[2])/3.0;
    }
};

class Shapes
{
    public:
    int len; //data member
    int breadth;

    string findshape() //member functions
    {
        if(len==breadth)
        {
            return "square";
        }
        else
        {
            return "rectangle";
        }
    }


};


int main()
{
    cout<<"Hi"<<endl;
    myCustvar day;
    int var_name;
    day=monday;
    cout<<day<<endl;
    student s1;
    s1.name="Asmita";
    s1.marks=98.5;
    cout<<"The name of student is:"<<s1.name<<"; "<<"Marks is:"<<s1.marks<<endl;
    
    // int N;
    // cin>>N;
    // Student students[100];
    // for (int i = 0; i < N; ++i) {
    //     cin >> students[i].Name >> students[i].id;
    //     for (int j = 0; j < 3; ++j) {
    //         cin >> students[i].marks[j];
    //     }
    // }
    
    int len;
    int breadth;
    cin>>len;
    cin>>breadth;
    if(len==breadth)
    {
        cout<<"square"<<endl;
    }
    else
    {
        cout<<"rectangle"<<endl;
    }

    Shapes t1; //objects of class.
    cin>>t1.len;
    cin>>t1.breadth;
    string res=t1.findshape();
    cout<<"The final shape is:"<<res;

    //four pillar of oops inheritance,abstraction,encapsulation,polymorphism.
    //data abstraction is hiding of irrevalent data and showing only the important 
    //access modifiers.
    //public, private and protected.
    //encapsulation is collection of some data members and member functions some public and some
    //private.
    // protected comes in use in inheritance.
    //constructor is a special member function which automatically gets called
    //whenever an object gets created.
    //don't have a return type and has same name as class.
    //a constructor with no parameters is called default constructor and
    //a constructor with parameters is called parameterized constructors.
}