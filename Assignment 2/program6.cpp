#include<iostream>
// int x=10;
// int main()
// {
//     int x=20;
//     std::cout<<x<<" "<<::x;
// }
class test
{
    int a;
    int b;
    static int i;
    public:
    void data(int x,int y)
    {
        a=x;
        b=y;
        std::cout<<a+b<<std::endl;
    }
    void show()
    {
        std::cout<<"i="<<i<<std::endl;
    }
    static void geta(int z)
    {
        z=30;
        std::cout<<z<<std::endl;
    }
    void print();

};
int test::i=1;
void test::print()
{
    std::cout<<a<<" "<<b<<std::endl;
}
int main()
{
    int i;
    std::cin>>i;
    std::cout<<i<<std::endl;
    test t1;
    test::geta(20);
    t1.data(20,30);
    t1.print();
    test t2;
    t2.show();

}