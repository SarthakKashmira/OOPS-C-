#include<iostream>
using namespace std;
class Parent{
    public:
    void show()
    {
        cout<<"The Parent class is being shown "<<endl;
    }
};

int main()
{
    Parent *ptr;
    ptr=new Parent;
    ptr->show();
}