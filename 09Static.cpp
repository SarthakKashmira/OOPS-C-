#include<iostream>
using namespace std;
class Sarthak{
    static int count;  //static variables
    public:
    Sarthak()
    {cout<<"Constructor called"<<endl;}
    static int printMsg()
    {cout<<"Welcome to the class"<<endl;
    return 2;}
    ~Sarthak()
    {cout<<"Destructor called"<<endl;}
};
int Sarthak::count=0;
int main()
{
    int x=0;
    if(x==0)
    {Sarthak obj;
    int get=obj.printMsg(); //We can also call the static function this way also
    }
    if(x==1)
    {static Sarthak obj2;} //static object

    //to call static function this is the recommended way
    int ans=Sarthak::printMsg();
    cout<<"Answer is "<<ans<<endl;

    cout<<"end "<<endl;
}