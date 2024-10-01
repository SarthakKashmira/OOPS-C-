//concept of abstract classes and virtual function
#include<iostream>
using namespace std;

class Person{                  //this is abstract class 
    public:
    virtual void show()=0;
    static void message()
    {
        cout<<"Herllo"<<endl;
    }

};

class Employee:public Person{
    public:
    void show()
    {
        cout<<"The employee class is running "<<endl;              //pure virtual function is overridden
    }
};
class Teacher:public Person{
    public:
    void show()
    {
        cout<<"The teacher class is running "<<endl;               //pure virtual function is overridden
    }
};
int main()
{
    // Person obj;                //cannot make object of abstract classes
    Person *ptr;
    Employee e1;
    ptr=&e1;
    ptr->show();
    e1.show();
    Teacher t1;
    ptr=&t1;
    ptr->show();
    t1.show();
    Person::message();
}