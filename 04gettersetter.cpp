#include<iostream>
#include<string.h>
using namespace std;
class Book{
    int pages;
    string name;
    float price;
    public:
    //some setter functions are as  below
    void setpages(int p)
    {pages=p;}
    void setname(string str)
    {name=str;}
    void setprice(float pr)
    {price=pr;}
    
    //to display the values of the object
    void display()
    {cout<<"No of pages are :"<<pages<<endl; cout<<"Name os the book is:"<<name<<endl;cout<<"Prices are :"<<price<<endl;}

    //some getter functions are now,as they are called
    int getpages()
    {return pages;}
    string getname()
    {return name;}
    float getprice()
    {return price;}
};
int main()
{
    Book *obj=new Book();
    obj->setpages(56);
    obj->setname("Sarthak Autobiography");
    obj->setprice(45.65);
    obj->display();

    cout<<"Pages are :"<<obj->getpages()<<endl;
    cout<<"Name are :"<<obj->getname()<<endl;
    cout<<"Price are :"<<obj->getprice()<<endl;
}