//operator overloading for compound assignment operator +=
//C1+=C2 will be interpreted as C1.operator+=(C2)
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
	complx operator+(complx c);
	void operator+=(complx c);
};
complx complx::operator+(complx c)
{
	return complx(real+c.real,imag+c.imag);
}
void complx::operator+=(complx c)
{
	real=real+c.real;
	imag=imag+c.imag;
}
int main()
{
	complx c1(2,3),c2(3,4);
	c1+=c2;    // instead of c1=c1+c2;
	c1.show();
	c2.show();
	
}

