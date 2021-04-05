//Inheritance in class templates
#include<iostream>
using namespace std;
template<class T>
class Base
{
	protected:
	T x;
	public:
	void show(T a)
	{
		x=a;
		cout<<endl<<"base class: "<<x;
	}
};
template<class T,class U>
class Derived: public Base<T>
{
	T y;
	U z;
	public:
	void display(T a, U b)
	{
		y=a; z=b;
		cout<<endl<<"Derived class: "<<y<<" and "<<z;
	}
	
};
int main()
{
	Derived<int,float> dobj;//T with int and U with float
	dobj.show(10);
	dobj.display(20,200.54);
}
