#include<iostream>
using namespace std;
class Parent{
    static int k;
    public:
    Parent(){
        k++;
        cout<<"The constructor of Parent is called "<<k<<" times"<<endl;
    }
};
int Parent::k=0;
int main()
{
    Parent *ptr[5];
    for(int i=0;i<5;i++)
    {
        ptr[i]=new Parent();
    }
}