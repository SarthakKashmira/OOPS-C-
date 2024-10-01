//Subscript overloading is used for checking the array out of bound for index 
#include<iostream>
using namespace std;
class Sample{
    int num[10];
    int size=10;
    public:
    Sample() {for(int i=0;i<10;i++){num[i]=i;}}
    Sample(int arr[]) {for(int i=0;i<10;i++){num[i]=arr[i];}}
    int& operator [](int ind)            //if we put & then we pass reference of array ,which helps us in modifying actual array
    {  if(ind<=size){return num[ind];}   //otherwise it would have been passed by value  
        return num[0];  }  
};
int main()
{
    Sample s1;
    int ind;
    cout<<"Enter the index to check the limit "<<endl;
    cin>>ind;
    if(ind==0) cout<<s1[0]<<endl;
    else{
    if(s1[11]!=s1[0]) cout<<"Value contained is :"<<s1[11]<<endl;
    else cout<<"Array out of bound index"<<endl;
    }
}