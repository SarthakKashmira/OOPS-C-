#include<iostream>
using namespace std;
class B{
    int num1;
    protected:
    int num2;
    public:
    friend class F;
};
class F{
    public:
    void get(B &obj)
    {
        cout<<"Enter the value of private variable in class F function for B class"<<endl;
        cin>>obj.num1;
        cout<<"Enter the value of protected variable in class F function for B class"<<endl;
        cin>>obj.num2;
    }
    void display(B &obj)
    {
        cout<<"Values for the private variable are "<<obj.num1<<endl;
        cout<<"Values for the protected variable are "<<obj.num2<<endl;
    }
};
int main()
{
    B obj;
    F obj1;
    obj1.get(obj);
    obj1.display(obj);
}