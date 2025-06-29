#include<iostream>
using namespace std;
class Vehicle
{
    protected:
    int make;
    string model;
    int year;
    public:
    Vehicle()
    {

    }
    Vehicle(int make, string model, int year)
    {
        this->make=make;
        this->model=model;
        this->year=year;
    }

};
class Truck:public Vehicle
{
    protected:
    int load_capacity;
    public:
    Truck()
    {

    }
    Truck(int x,int y, int z, int w)
    {
        load_capacity=x;
        make=y;
        model=z;
        year=w;
    }
};
class RefrigeratedTruck:public Truck
{
    public:
    int temperature_control;
    RefrigeratedTruck(int temp, int m, string model, int l, int y)
    {
        this->temperature_control=temp;
        this->make=m;
        this->model=model;
        this->load_capacity=l;
        this->year=y;
    }
    void disp();
};
void RefrigeratedTruck::disp()
{
    cout<<temperature_control<<" "<<make<<" "<<model<<" "<<load_capacity<<" "<<year<<endl;
}

int main()
{
    RefrigeratedTruck r1(37,6,"mahindra",37,1990);
    r1.disp();
}