#include<iostream>
using namespace std;
class Speedometer
{
    public:
    int speed;
    void s(int speed)
    {
        this->speed=speed;
    }
};
class FuelGauge
{
    protected:
    float fuellevel;
    void feul(int f)
    {
        fuellevel=f;
    }
};
class Thermometer
{
    public:
    int temperature;
};
class CarDashboard: public Speedometer, public FuelGauge, public Thermometer
{
    public:
    CarDashboard(float fuellevel, int temperature,int speed)
    {
        this->speed=speed;
        this->fuellevel=fuellevel;
        this->temperature=temperature;
    }
    void display()
    {
        cout<<speed<<", "<<fuellevel<<", "<<temperature<<endl;
    }
};

int main()
{
    CarDashboard *c1=new CarDashboard(78.9,35,1000);
    c1->display();
}