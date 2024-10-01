#include<iostream>
using namespace std;
template <class T>
T maxi(T n,T m)
{
    return (n>m)?n:m;
}

template <class F>
F printi(F n)
{
    cout<<n<<endl;
    return n;
}
int main()
{
    cout<<"Integer max is "<<maxi(9,6)<<endl;
    cout<<"Float max is "<<maxi(6.55,8.9)<<endl;
    cout<<"Character is "<<maxi('c','a')<<endl;
    printi("ALI");
    printi(345);
}