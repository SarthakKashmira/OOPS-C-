#include <iostream>
using namespace std;
class Sample
{
    int num1;

public:
    Sample(int num) : num1(num) {}

    void operator+(Sample &obj)
    {
        cout << obj.num1 << endl;
        cout << num1;
    }
    void operator-(Sample &obj)
    {
        cout << num1 - obj.num1 << endl;
    }
};
int main()
{
    Sample obj1(23), obj2(34), obj3(56);
    obj2 + obj3;
    obj2 - obj1;
}
