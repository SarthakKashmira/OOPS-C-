#include<iostream>
using namespace std;
class Sample{
    int num1;
    public:
    Sample(int num):num1(num) {}
    Sample operator ++()
    {
        return Sample(++num1);       //does value 24 and retuens
    }
     Sample operator ++(int)
    {
        return Sample(num1++);        //will return 24 as postfix first assigns and then calculates,so assigned 24 as returned 25 
    }
     Sample operator --()
    {
        return Sample(--num1);        //does value 24 from 25 and returns
    }
     Sample operator --(int)
    {
        return Sample(num1--);       //similarly as for postfix increment it does postfix decrement
    }
    void show()
    {cout<<"Value is :"<<num1<<endl;}
};

int main()
{
    Sample obj(23);
    Sample d3=++obj;
    d3.show();
    d3=obj++;
    d3.show();
    d3=--obj;
    d3.show();
    d3=obj--;
    d3.show();
}