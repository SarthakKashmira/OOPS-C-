#include<iostream>
using namespace std;
class{
    string name;
    int age;
    string caste="Kashmira";
    public:
    void takeDetails()
    {
        cout<<"Enter your name"<<endl;
        cin>>name;
        cout<<"Enter age "<<endl;
        cin>>age;
    }
    void getDetails()
    {
        cout<<"Name is "<<name<<endl;
        cout<<"Age is "<<age<<endl;
    }

}obj1;
int main() 
{
    obj1.takeDetails();
    obj1.getDetails();
} 