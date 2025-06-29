#include <iostream>
using namespace std;
class student 
{
    int b;
    public:
    student(int b) 
    {
        this->b = b;
    }

    void display() 
    {
        cout << "The value of b is: " << b << endl;
    }

    // Pre-increment operator
    student& operator++() {
        b=++b;
        return *this;
    }

    // Post-increment operator
    student operator++(int) {
        student temp = *this;
        b++;
        return temp;
    }
};

int main() 
{
    student s1(15);
    student s2 = s1++; 
    s2.display();
    s1.display();      
    return 0;
}
