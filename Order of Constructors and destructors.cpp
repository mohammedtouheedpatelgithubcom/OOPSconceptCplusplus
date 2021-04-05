//order of constructors in Multi level Inheritance
#include<iostream>
using namespace std;
class B1
{
	  public:
		B1( )
  		{
		    cout << "B1 constructor" << endl;
  		}	 
};
class B2:  public B1
{
	public:
		B2( )
  		{
		    cout << "B2 constructor" << endl;
  		}
};
class D : public B2
{
	  public:
	    D( )
  		{
			    cout << "Inside Derived constructor" << endl;
  		} 
};
int main()
{
	  D dobj;
}


