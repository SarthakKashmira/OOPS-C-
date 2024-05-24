#include<iostream>
using namespace std;
class Book{
    string name;
    int pages;
    float price;
    public:
    Book()
    {
        name="Book of Goodwill";
        pages=100;
        price=98.98;
    }
    Book(int pag,float pri)
    {
        pages=pag;
        price=pri;
        name="Book of TinTin";
    }
    Book(string nam,int pag)
    {
        name=nam;
        pages=pag;
    }
    void show()
    {
        cout<<"Name is "<<name<<endl;
        cout<<"Pages are "<<pages<<endl;
        cout<<"Price is "<<price<<endl;
    }
};
int main()
{
    Book obj1;
    obj1.show();
    Book obj2(56,87.54);
    obj2.show();
    Book obj3("Book of Harry Potter",43);
    obj3.show();
}