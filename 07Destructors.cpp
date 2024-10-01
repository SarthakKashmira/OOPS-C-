#include<iostream>
using namespace std;
class Book{
    int pages;
    string name;
    public:
    Book(int n)
    {
        pages=n;
        name="Adventures of tintin";
        cout<<"Constructor called,"<<pages<<endl;
    }
    ~Book()
    {cout<<"Destructor called "<<pages<<endl;}
} obj2(38);
int main()
{
    Book obj(4);
    Book obj1(6);
    cout<<"Back to main"<<endl;
}
