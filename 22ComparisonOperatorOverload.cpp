#include<iostream>
using namespace std;
class Sample{
    int num1;
    public:
    Sample():num1(0){}
    Sample(int num):num1(num){}
    bool operator <(Sample &obj)
    {if(num1<obj.num1) return true;
     return false;
    }
    bool operator >(Sample &obj)
    {if(num1<obj.num1) return true;
     return false;
    }
    bool operator <=(Sample &obj)
    {if(num1<obj.num1) return true;
     return false;
    }
    bool operator >=(Sample &obj)
    {if(num1<obj.num1) return true;
     return false;
    }
};
int main()
{Sample obj1(20),obj2(30);
if(obj1<obj2){cout<<"first object is less than second object :"<<endl;}
else{cout<<"first object is not less than second object :"<<endl;}

if(obj1>obj2){cout<<"first object is greater than second objects :"<<endl;}
else{cout<<"first object is not greater than second objects :"<<endl;}

}