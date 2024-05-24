#include<iostream>
using namespace std;
class Book{
    int pages;
    string name;
    public:
    Book(int n)
    {
        pages=n;
        name="Sarthak Book";
    }
    void getData()
    {cout<<"Pages are :"<<pages<<endl;
     cout<<"Name is :"<<name <<endl;}
     ~Book()
     {cout<<"Destructor is called:"<<pages<<endl;}
};
void createObj()
{
    Book b1(23),b2(34);
    b1.getData();
    b2.getData();
}