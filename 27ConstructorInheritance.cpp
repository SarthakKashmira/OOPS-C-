#include<iostream>
using namespace std;
class Parent{
    public:
    Parent(){
        cout<<"Parent class constructor called "<<endl;
    }
    ~Parent(){
        cout<<"Parent class destructor called "<<endl;
    }
};
class child1:public Parent{
    public:
    child1(){
        cout<<"Constructor of child class "<<endl;
    }
    ~child1(){
        cout<<"Destructor of child class"<<endl;
    }
};
class child2:public child1{
    public:
    child2(){
        cout<<"Constructor of child2 class "<<endl;
    }
    ~child2(){
        cout<<"Destructor of child2 class"<<endl;
    }
};
int main()
{
    child2 obj;

}