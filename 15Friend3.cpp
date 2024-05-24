#include<iostream>
using namespace std;
class B;
class A{
    int num1;
    public:
    A(){num1=20;}
    friend void show(A &,B &);           //three friend functions with objects of different classes
    friend void getvalue(A &,B &);
    friend void add(A &,B &);
};
class B{
    int num2;
    public:
    B(){num2=30;}
    friend void show(A &,B &);            //three friend functions with objects of different classes
    friend void getvalue(A &,B &);
    friend void add(A &,B &);
};
void getvalue(A &obj1,B &obj2)
{cout<<"Give value for object of A"<<endl;
cin>>obj1.num1;
cout<<"Give value for object of B"<<endl;
cin>>obj2.num2;
}
void add(A &obj1,B &obj2)
{
    cout<<"After adding we get the result as "<<obj1.num1+obj2.num2<<endl;
}
void show(A &obj1,B &obj2)
{cout<<"Value for class A object is"<<obj1.num1<<endl;
cout<<"Value for class B object is"<<obj2.num2<<endl;}

int main()
{
    A obj1;
    B obj2;
    show(obj1,obj2);
    getvalue(obj1,obj2);
    add(obj1,obj2);
}