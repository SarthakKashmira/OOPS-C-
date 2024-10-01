//We use this when we are referencing the derived class object with base class pointer
#include<iostream>
using namespace std;
class Parent{
    public:
    virtual void show(){         //if not virtual then always the parent class show will run in int main
        cout<<"Showing parent class"<<endl;
    }
};
class child1 : public Parent{
    public:
    void show(){
        cout<<"Showing child 1 of parent clas"<<endl;
    }    
};
class child2: public Parent{
    public:
    void show(){
        cout<<"Showing child 2 of parent clas"<<endl;
    }
};
int main()
{
    Parent *ptr=new Parent;
    ptr->show();
    ptr=new child1();
    ptr->show();
    ptr=new child2();
    ptr->show();
}