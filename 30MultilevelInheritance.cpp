#include<iostream>
using namespace std;
class person{
    string name;
    string city;
    int age;
    public:
    void input_person()
    {
        cout<<"enter name"<<endl;
        cin>>name;
        cout<<"Enter city"<<endl;
        cin>>city;
        cout<<"Enter the age"<<endl;
        cin>>age;
    }
    void show(){
        cout<<"Name is "<<name<<endl;
        cout<<"City is "<<city<<endl;
        cout<<"Age is "<<age<<endl;
    }

};
class emp:public person{
    int sal;
    public:
    void input_emp(){
        cout<<"enter the salary"<<endl;
        cin>>sal;
    }
    void show_emp(){
        cout<<"The salary is "<<sal<<endl;
    }
};
class prog:public emp{
    int languages;
    int frameworks;
    public:
    void input_prog(){
        cout<<"Enter the languages you know"<<endl;
        cin>>languages;
        cout<<"Enter the frameworks you know"<<endl;
        cin>>frameworks;
    }
    void show_final(){
        show();
        show_emp();
        cout<<"The langauges we know are "<<languages<<endl;
        cout<<"The frameworks we know are "<<frameworks<<endl;
    }
};

int main()
{
    prog p1;
    p1.input_person();
    p1.input_emp();
    p1.input_prog();
    p1.show_final();
}