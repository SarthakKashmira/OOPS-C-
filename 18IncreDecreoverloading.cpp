#include<iostream>
using namespace std;
class Sample{
    int num1;
    public:
    Sample(int num):num1(num){}
    
    void operator ++()         //prefix increment
    {
        num1++;
        cout<<num1<<endl;
    } 
      void operator ++(int)      //postfix increment
    {
        num1++;
        cout<<num1<<endl;
    }
    void operator --()         //prefix decrement
    {
        num1--;
        cout<<num1<<endl;
    }
      void operator --(int)    //postfix decrement
    {
        num1--;
        cout<<num1<<endl;
    }
};

int main()
{
    Sample obj(18);
    ++obj;
    obj++;
    --obj;
    obj--;

}