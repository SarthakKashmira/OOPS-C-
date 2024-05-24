// C++ Program to demonstrate 
// how friend functions work as
// a bridge between the classes
#include <iostream>
using namespace std;
class ABC;   //need to declare it here as on line 12 we have to pass it
class XYZ {
	int x;
public:
	void set_data(int a) 
	{ x = a; }
	friend void max(XYZ, ABC);
};
class ABC {
	int y;
public:
	void set_data(int a) 
	{ y = a; }
	friend void max(XYZ, ABC);
};

void max(XYZ t1, ABC t2)
{
		cout << t1.x<<endl;
		cout << t2.y<<endl;
}
int main()
{
	ABC _abc;
	XYZ _xyz;
	_xyz.set_data(20);
	_abc.set_data(35);

	// calling friend function
	max(_xyz, _abc); 
	return 0;
}
