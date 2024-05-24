//two types of copy constructor are there 
//1->default copy constructor    2->user defined copy constructor
#include<iostream>
using namespace std;
class ID{
    int id;
    public:
    ID()
    {id=50;}
    ID(int n)
    {id=n;}
    ID(ID &t)        //user defined copy constructor
    {id=t.id;}
    void show()
    {cout<<id<<endl;}
};
int main()
{
    ID obj(80);
    ID obj3;
    obj3=obj;        //default copy constructor
    obj3.show();
}