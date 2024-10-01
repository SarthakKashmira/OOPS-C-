#include <iostream>
using namespace std;
class Parent
{
    int a;
    int b;

public:
    Parent(int p1, int p2) : a(p1), b(p2)
    {
        cout << "Values for Parent assigned" << a << " " << b << endl;
    }
};
class child1 : public Parent
{
    int x;
    int y;

public:
    child1(int p1, int p2, int c1, int c2) : Parent(p1, p2), x(c1), y(c2)
    { // here needs to initialize the parent and also pass params of parent
        cout << "Values for Child assigned" << x << " " << y << endl;
    }
};

int main()
{
    child1 obj(2, 3, 4, 5);
}