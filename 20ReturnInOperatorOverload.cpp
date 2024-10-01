#include<iostream>
using namespace std;
class Sample{
    int num1;
    public:
    Sample():num1(0){}
    Sample(int num):num1(num){}
    Sample operator +(Sample &obj1)
    {Sample n;
    n.num1=num1+obj1.num1;
    return n;}
    Sample operator -(Sample &obj1)
    {Sample n;
    n.num1=num1-obj1.num1;
    return n;}
    Sample operator /(Sample &obj1)
    {Sample n;
    n.num1=num1/obj1.num1;
    return n;}
    Sample operator *(Sample &obj1)
    {Sample n;
    n.num1=num1*obj1.num1;
    return n;}
    void show()
    {cout<<"Value is :"<<num1<<endl;}
};
int main()
{
    Sample obj1(10),obj2(5),sum,sub,div,mul;
    sum=obj1+obj2;
    sub=obj1-obj2;
    div=obj1/obj2;
    mul=obj1*obj2;
    sum.show();
    sub.show();
    div.show();
    mul.show();
}