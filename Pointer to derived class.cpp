//pointer to derived class
#include<iostream>
using namespace std;
class B
{
	public:
	void show()  {cout<<endl<<"Base Class";}
};
class D: public B
{
	public:
	void show() {cout<<endl<<"Derived Class";}
};
int main()
{
	B *bp,bobj;
	
	bp=&bobj;  //base class pointer to base class object
	bp->show();
	
	D *dp,dobj;
	dp=&dobj;  //derived class pointer to derived class object
	dp->show();
	
	bp=&dobj;  //base class pointer to derived object
	bp->show(); //early binding: function call is mapped at compile time based on the data type of the pointer
	
	// dp=&bobj;   //error because derived pointer cannot point to base class object
	dp=(D*)&bobj;//derived class pointer to base class object
	dp->show();//early binding
}


