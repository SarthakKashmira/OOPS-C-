//Write a class for bank account with three data members as 1->depositor,2->bank amount,3->account name.
//It should have a constructor to initialize the values.
//Three member functions are required as 1->deposit function,2->withdraw function and 3->display function.
#include<iostream>
using namespace std;
class Bank{
    string depositor;
    float amount;
    string accountname;
    public:
    Bank()
    {cout<<"Enter the Account name you want to create"<<endl;
    cin>>accountname;
    cout<<"Enter the amount you want to deposit "<<endl;
    cin>>amount;
    cout<<"Enter the name of depositor to deposit the amount"<<endl;
    cin>>depositor;
    }
    void deposit(string name,float val)
    {amount=amount+val;
    depositor=name;
    }
    void withdraw(string name,float val)
    {
     if(amount>val){amount=amount-val;
     depositor=name;}
     else{
        cout<<"Amount is less in bank.Cannot withdraw from it."<<endl;
     }
    }
    void display()
    {cout<<"Account name:"<<accountname<<endl;
     cout<<"Amount deposited is:"<<amount<<endl;
     cout<<"Last Depositor is :"<<depositor<<endl;
    }

};
int main()
{
  Bank B1;
  int choice=0;
  while(choice<4)
  {
    cout<<"-----------Main Menu------------"<<endl;
    cout<<"1->Deposit the amount "<<endl;
    cout<<"2->Withdraw the amount "<<endl;
    cout<<"3->display the amount "<<endl;
    cout<<"4->Exit the menu !"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:{
            string name;float am;
            cout<<"Enter depositor name"<<endl;
            cin>>name;
            cout<<"Enter amount to deposit"<<endl;
            cin>>am;
            B1.deposit(name,am);
            break;
        }
        case 2:{
            string name;float am;
            cout<<"Enter withdrawer name"<<endl;
            cin>>name;
            cout<<"Enter amount to withdraw"<<endl;
            cin>>am;
            B1.withdraw(name,am);
            break;
        }
        case 3:B1.display();
        break;
        case 4:exit(1);
        break;
        default:cout<<"Invalid number"<<endl;
        break;
    }
  }

}