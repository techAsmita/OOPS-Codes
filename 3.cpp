//code statements
//private only its class accessed
//public can be accessed anywhere
//protected can be accessed in base and child class(inheritance)
#include<iostream>
#include<cmath>
using namespace std;
void welcome()
{
    for(int i=1;i<5;i++)
    {
        cout<<"Welcome"<<endl;
    }
}
char value(string n)
{
    cout<<"Welcome "<<n<<endl;
    return 'Y';
    cout<<endl;
}
int sum(int a, int b)
{
    int temp;
    temp=a+b;
    return temp;
}
int subtract(int num1, int num2)
{
    if(num1<num2)
    {
        return -1;
    }
    else
    {
        return num1-num2;
    }
}
int main()
{
    double num,sq_root;
    num=25;
    sq_root=sqrt(num);
    cout<<sq_root<<endl;

    //functions

     welcome();
     char returned_value;
     returned_value=value("Asmita");
     cout<<returned_value<<endl;

     cout<<sum(10,20)<<endl;

     int finalres;
     finalres=subtract(14,15);
     cout<<"The result is: "<<finalres<<endl;
}
void vertical5() {
    for (int i = 0; i < 5; i++) {
        cout << "*" << endl;
    }
}

void horizontal5() {
    for (int i = 0; i < 5; i++) {
        cout << "* ";
    }
    cout << endl;
}
// int main() {
// 	// Your code here
//     vertical5();      // Print stars vertically
//     cout << endl;     // Extra blank line
//     horizontal5();
//     return 0;
// }


