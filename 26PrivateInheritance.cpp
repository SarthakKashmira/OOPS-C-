#include<iostream>
using namespace std;
class Animal{
    int legs; int brain;
    protected:
    int eyes; int ears;
    public:
    Animal() {legs=4;brain=1;eyes=2;ears=2;}
    void display(){
        cout<<"Legs are :"<<legs<<endl;
        cout<<"Brain are :"<<brain<<endl;
    }
};
class Dog:private Animal{                     //everything of base class is now private to the deribved class here
    string name; string breed; 
    public:
    Dog() {name="Safra"; breed="Labrador";}
    void show(){
        cout<<"Name is :"<<name<<endl;
        cout<<"Breed is :"<<breed<<endl;
        cout<<"Eyes is :"<<eyes<<endl;
        cout<<"ears is :"<<ears<<endl;
        display();                             //can do it here
    }
};
int main()
{   Dog d1; 
    // d1.display();   //cannot do this as now it is a protected member
    d1.show();
}