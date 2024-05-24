#include<iostream>
using namespace std;
class Book{
    const int pages;  //const data member   //can be initialized here also
    int n;
    public:
    Book():pages(50),n(40)  //can be initialized like this 
    {
        
        cout<<pages<<endl;
        // pages=50;  //cannot be initialized like this
    }
    void change()
    {n=50;}
    void changing() const  //now data member cannot be changed inside this function
    {
        // n=70;  //cannot do this
        cout<<"Const function is used here that cannot changer data"<<endl;
    }

};
int main()
{
    const int n=10;
    // n++;   gives compile time error as already a const so value cant be changed
    Book b1;
    b1.change(); //can change the value of b1 as object b1 not constant
    const Book b2;
    //b2.change();  //cannot chnage the value of n as b2 is const
}