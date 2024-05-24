#include<iostream>
using namespace std;
class Distance{
    int km,hr;
    public:
    void get()
    {cout<<"Enter the kilometers of distance travelled"<<endl;
     cin>>km;
     cout<<"Enter the hours of travelling"<<endl;
     cin>>hr;
    }
    void update()
    {
        int dis,hou;
        cout<<"Eneter the updated distance "<<endl;
        cin>>dis;
        km=dis;
        cout<<"Enter the hours of time"<<endl;
        cin>>hou;
        hr=hou;
     }
    float totalCost(Distance d)   //opassing object as parameter
    {
        cout<<d.km<<endl;
        float ans=((d.km/10)*5)+((hr/2)*10);
        cout<<ans<<endl;
        return ans;
    }
};

int main()
{
    Distance obj;
    obj.get();
    int choice=0;
    while(choice<=3)
    {
        cout<<"----------------Main Menu-----------------------"<<endl;
        cout<<"1)----------Update the travelling-----------"<<endl;
        cout<<"2)----------Find the cost--------------"<<endl;
        cin>>choice;
        switch(choice){
        case 1:obj.update();
        break;
        case 2:cout<<"Total cost of journey is:"<<obj.totalCost(obj)<<endl;
        break;
        case 3:exit(1);
        break;
        default:cout<<" Invalid number "<<endl;
        break;
        }

    }

}