//constructors,class functions etc
#include<iostream>
using namespace std;

class player
{
    public:
    string name;
    player()
    {
        cout<<"default constructor called"<<endl;
    }
    player(string n)
    {
        cout<<"param const is called"<<endl;
        cout<<n<<endl;
    }
    void xp()
    {
        cout<<"300"<<endl;
    }
    void add(int n)
    {

    }
    ~player() //automatically called no param.
    {
        cout<<"Destructor called"<<endl;
    }
};
int main()
{
    player p1;//default constructor gets called.
    player p2("Asmita");//parameterized constructor gets called.
    p1.xp(); //a void function can't directly be called inside cout.
    //first constructor is called then the other function will give output.
}