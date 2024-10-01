#include<iostream>
using namespace std;
int main()
{
    try{
    cout<<"Enter a numbver"<<endl;
    int a;
    cin>>a;
    cout<<"Enter second number"<<endl;
    int b;
    cin>>b;
    if(b==0) throw(0);
    cout<<a/b<<endl;
    }
    catch(int){
        cout<<"Cannot divide by zero"<<endl;
    }
}