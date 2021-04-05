#include<iostream>
using namespace std;
// C++ Implementation to show that a derived class doesn?t inherit access to private data members.
// However, it does inherit a full parent object
class A
{
public: int x;  protected:  int y; private:   int z;
};
class B : public A
{
// x is public // y is protected  // z is not accessible from B
	public :void show() 	{		x=10;y=20;	cout<<x<<endl<<y<<endl; }
};
class C : protected A
{
// x is protected // y is protected  // z is not accessible from C
public: void show()  	{  		x=10;y=20;	cout<<x<<endl<<y<<endl;}
};
class D : private A // 'private' is default for classes
{
// x is private // y is private // z is not accessible from D
public: void show()	{		x=10;y=20; cout<<x<<endl<<y<<endl;	}
};
int main()
{
	B Bobj; C Cobj; D Dobj;
	Bobj.show();
	Bobj.x=20; //x public
	//Bobj.y=30;//y protected wrong
//	Cobj.x=10; //x protected
//	Cobj.y=20;//y protected
	Cobj.show();
	//Dobj.x=40;//x private
	//Dobj.y=60; //y private
	Dobj.show();
}

