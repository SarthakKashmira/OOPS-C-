#include<iostream>
using namespace std;
template <typename T>      //typename can be replavced with class also 
class Array{
    T *ptr;
    int s;
    public:
    Array(T* arr,int si):ptr(arr),s(si){

    }
    void print()
    {
        for(int i=0;i<s;i++)
        {
            cout<<ptr[i]<<endl;
        }
    }
};
int main()
{
    int arr[]={2,3,4,5,6,7};
    Array <int> a(arr,6);
    a.print();
}