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
    Distance update()     //returning object from function
    {
        Distance d1;
        int dis,hou;
        cout<<"Eneter the updated distance "<<endl;
        cin>>dis;
        d1.km=dis;
        cout<<"Enter the hours of time"<<endl;
        cin>>hou;
        d1.hr=hou;
        return d1;
     }
    float totalCost(Distance d)
    {
        cout<<d.km<< "and time is"<<d.hr<<endl;
        float ans=((d.km/10)*5)+((hr/2)*10);
        cout<<ans<<endl;
        return ans;
    }
};

int main()
{
    Distance d,upd;
    d.get();
    upd=d.update();
    upd.totalCost(upd);
}