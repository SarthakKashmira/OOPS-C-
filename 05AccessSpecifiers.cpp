#include<iostream>
using namespace std;
class Book{
    int page=46;
    public:
    int price=90;
    protected:
    int age=67;
};

int main()
{
    Book obj;
    cout<<obj.price<<endl;
}