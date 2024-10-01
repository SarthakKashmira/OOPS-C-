#include<iostream>
using namespace std;
class Sarthak{
    static int count;
    public:
    Sarthak()
    {count++;}
    void getout()
    {cout<<count<<endl;}
};
int Sarthak::count=0;
int main()
{
    Sarthak obj;
    Sarthak arr[10];
    arr[9].getout();
}