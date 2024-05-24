#include<iostream>
using namespace std;
class Student{
    string rollno;
    string name;
    string branch;
    public:
    //Input method in class Student
    void input() 
    {
        cout<<"Enter rollno,name,branch as space separated"<<endl;
        cin>> rollno >> name >> branch;
    }
    //Output method in class Student
    void output()
    {
        cout<<"Roll no is "<<rollno<<endl;
        cout<<"Name is "<<name<<endl;
        cout<<"Branch is "<<branch<<endl;
    }
};


int main()
{
    Student obj;
    obj.input();
    obj.output();
}