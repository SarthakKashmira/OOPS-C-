#include <iostream>
using namespace std;
class Base
{
    string name;
    int age;

public:
    Base() : name("Sarthak"), age(23) {}
    void show()
    {
        cout << "Name is " << name << endl;
        cout << "Age is " << age << endl;
    }
};
class Child : public Base
{
    string name;
    int age;

public:
    Child() : name("Gaurav"), age(34) {}
    void show()
    {
        // Base::show();                    //if we want to acacess it here then do
        cout << "Name is " << name << endl;
        cout << "Age is " << age << endl;
    }
};
int main()
{
    Child c1;
    c1.show();
    c1.Base::show();
}
