#include<iostream>
using namespace std;
class Student{
    protected:
    string name;
    public:
    Student(){
        name="Sarthak";
    }

};
class stud_marks{
    protected:
    int marks;
    public:
    stud_marks(){
        marks=98;
    }
};
class Result:public Student,public stud_marks{
    public:
    void input()
    {
        cout<<"Enter name os student "<<endl;
        cin>>name;
        cout<<"Enter marks of students"<<endl;
        cin>>marks;
    }
    void show()
    {
        cout<<"name of student is "<<name<<endl;
        cout<<"marks of student is "<<marks<<endl;
    }
};
int main()
{
    Result res;
    res.input();
    res.show();
}