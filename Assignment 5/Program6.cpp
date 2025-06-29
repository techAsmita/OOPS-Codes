#include<iostream>
using namespace std;
class Book
{
    protected:
    string title;
    string author;
    float price;
    void details(string t, string a, float p)
    {
        title=t;
        author=a;
        price=p;
    }
};
class Textbook: public Book
{
    public:
    string subject;
    Textbook(string subject, string title, string author, float price)
    {
        this->subject=subject;
        this->title=title;
        this->price=price;
        this->author=author;
    }
    void display()
    {
        cout<<"The author is: "<<author<<", "<<"The subject is: "<<subject<<", "<<"price is: "<<price<<", "<<"title is: "<<title<<endl;
    }
};
int main()
{
    Textbook t1("Romance","Romeo and Juliet","Shakespeare",500.50);
    t1.display();
    t1.subject="maths";
    t1.display();
}