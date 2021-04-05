//Binary Operator Overloading using friend function
#include<iostream>
using namespace std;
class complx
{
	int real,imag;
	public:
	complx():real(0),imag(0) {}
	complx(int r,int i):real(r),imag(i) {}
	void show()
	{
		cout<<endl<<"( "<<real<<" , "<<imag<< ")";
	}
	friend complx operator+(complx c1,complx c2);
};
complx operator+(complx c1,complx c2)
{
	return complx(c1.real+c2.real,c1.imag+c2.imag);
}

int main()
{
	complx c1(2,3),c2(3,4),c3;
	c3=c1+c2;
	c1.show();
	c2.show();
	c3.show();
}w
