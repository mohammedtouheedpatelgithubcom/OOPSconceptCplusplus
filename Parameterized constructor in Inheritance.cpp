//passing parameters to the base class constructor using derived class object
#include<iostream>
using namespace std;
class B1
{
	protected: 
		int a1,a2;
	public:
		B1(int x,int y):a1(x),a2(y) //a1=x;a2=y;
		{ 
			cout<<endl<<"a1 is:"<<a1<<" a2 is:"<<a2; 
		}	 
};
class B2
{
	protected: 
		int c;
	public:
		B2(int x):c(x) //c=x;
		{ 
			cout<<endl<<"c is:"<<c; 
		}	 
};
class D : public B1,public B2
{
	  int b;
	  public:
	    D(int w,int x,int y,int z):B1(w,x),B2(y),b(z)  
		{ 
			cout<<endl<<"b is:"<<b; 
		}
		
};
int main()
{
	  D dobj(10,20,30,40);   //B1(10,20), B2(30),D(40)
}


