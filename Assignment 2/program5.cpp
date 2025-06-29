#include<iostream>
using namespace std;
class Complex
{
    float r;
    float i;
    public:
    void setComplex(float a, float b)
    {
        r=a;
        i=b;
        cout<<r<<" "<<i<<endl;
    }
    void displaycomplex()
    {
        cout<<"The complex number is: "<<r<<"+"<<"i"<<i<<endl;
    }
    friend void sum(Complex , Complex );

};
void sum(Complex c3, Complex c4)
{
    cout<<c3.r+c4.r<<"+i"<<c3.i+c4.i;

}
int main()
{
    Complex c1,c2;
    c1.setComplex(10.2,2.3);
    c1.displaycomplex();
    c2.setComplex(11.0,2.5);
    c2.displaycomplex();
    sum(c1,c2);
}