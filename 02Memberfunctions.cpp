#include<iostream>
using namespace std;
class School
{
    string name;
    int start_year;
    public:
    void ask()
    {
        cout<<"Enter your name"<<endl;
        cin>>name;
        cout<<"Enter start year"<<endl;
        cin>>start_year;
    }
    void get();

};
void School::get()
{
    cout<<"Name is "<<name;
    cout<<"Starting year of school is "<<start_year<<endl;
}
int main()
{
    // School *s = new School();
    // s->ask();
    // s->get();

    //Either do above way or as below
    
    School obj;
    obj.ask();
    obj.get();
}