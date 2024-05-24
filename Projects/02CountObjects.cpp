//Count the number of objects created of a particular class
#include<iostream>
using namespace std;
class Sarthak{
    int age;
    static int count;
    string name;
    public:
    Sarthak()
    {   count++;}
    void displayCount()
    {cout<<"Count of objects created:"<<count<<endl;}
};
int Sarthak::count=0;
int main()
{
    Sarthak s1;
    s1.displayCount();
    Sarthak s2;
    s2.displayCount();
    Sarthak s3;
    s3.displayCount();
    Sarthak s4;
    s4.displayCount();
}