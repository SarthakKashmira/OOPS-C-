#include<iostream>
using namespace std;
class Sarthak{
    int age;
    string name;
    
    public:
    Sarthak():age(21),name("Good Boy")
    { }
    void getData() 
    {
    cout<<"Age is "<<age<<endl;
    cout<<"Name is "<<name<<endl;
    }
};
int main()
{
    Sarthak obj;
    obj.getData();
}
