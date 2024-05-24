//Write a class player that contains attributes of name age and team name.
//Write three member functions for input data,change data and display data.
//Write constructore that ask for input to initialize these attributes.
#include<iostream>
using namespace std;
class Player{
    int age;
    string name;
    string team;
    public:
    Player()
    {
        cout<<"enter the age"<<endl;
        cin>>age;
        cout<<"Enter the name"<<endl;
        cin>>name;
        cout<<"Enter the team"<<endl;
        cin>>team;
    }
    void inputData()
    {
        cout<<"Enter the age of player"<<endl;
        cin>>age;
        cout<<"Enter player name"<<endl;
        cin>>name;
        cout<<"enter team name "<<endl;
        cin>>team;
    }
    void changeData()
    {
        int a;
        string n,t;
        cout<<"enter age to change"<<endl;
        cin>>a;
        age=a;
        cout<<"enter name to change"<<endl;
        cin>>n;
        name=n;
        cout<<"enter team to change"<<endl;
        cin>>t;
        team=t;

    }
    void displayData()
    {
        cout<<"Age is :"<<age<<endl;
        cout<<"name is :"<<name<<endl;
        cout<<"team name is :"<<team<<endl;
    }
};
int main()
{
    Player P1;
    P1.displayData();
    int choice=0;
    do{
        
        cout<<"-------------Main Menu-------------"<<endl;
        cout<<"1:-Input Data"<<endl;
        cout<<"2:-Change Data"<<endl;
        cout<<"3:-Display Data"<<endl;
        cout<<"4:-Exit"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:P1.inputData();
            break;
            case 2:P1.changeData();
            break;
            case 3:P1.displayData();
            break;
            case 4:exit(1);
            break;
            default:cout<<"Invalid number "<<endl;
            break;
        }
    }while(choice<=4);
}