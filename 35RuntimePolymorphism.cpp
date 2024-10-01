//Executing run time polymorphism
#include<iostream>
using namespace std;
class Person{
    public:
    virtual void show()
    {
        cout<<"Person class object is formed"<<endl;
    }
};
class emp:public Person{
    public:
    void show()
    {
        cout<<"Employee class object is formed"<<endl;
    }
};
class teacher:public emp{
    public:
    void show()
    {
        cout<<"teacher class object is formed"<<endl;
    }
};

int main()
{
    Person *ptr[5];
    int choice;
    
    for(int i=0;i<5;i++)
    {
        cout<<"ENter number to create object 1->Person 2->Employee 3->Teacher"<<endl;
        cin>>choice;
        if(choice==1)
        {ptr[i]=new Person;}
        else if(choice==2)
        {
            ptr[i]=new emp();
        }
        else{
            ptr[i]=new teacher;
        }
    }
    for(int i=0;i<5;i++)
    {ptr[i]->show();}
}