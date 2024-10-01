#include<iostream>
using namespace std;
class str{
    string name;
    public:
    str():name("sarthak"){}
    str(string num):name(num){}
    str operator +(str &obj)
    {cout<<"The concatenated string is :"<<name+obj.name<<endl;
    return str(name+obj.name);}
    void display()
    {cout<<"The string contained inside this is :"<<name<<endl;}

};

int main()
{str obj1("helllo");
 str obj2;
 str ans=obj1+obj2;
 ans.display();
}