//operator overloading using class template
#include<iostream>
using namespace std;
template<class T>
class complx
{
	T real,imag;
	public:
	complx():real(0),imag(0) {}
	complx(T r,T i):real(r),imag(i) {}
	void show()
	{
		cout<<endl<<"( "<<real<<" , "<<imag<< ")";
	}
	complx operator+(complx c); //c1=c1+c2;
	
};
template<class T>
complx<T> complx<T>::operator+(complx<T> c)
{
	return complx(real+c.real,imag+c.imag);
}
int main()
{
	complx<int> c1(2,3),c2(3,4);
	c1=c1+c2;    // instead of c1=c1+c2;
	c1.show();
	c2.show();
	
	complx<float> c3(1.2,3.4),c4(5.6,3.3);
	c3=c3+c4;
	c3.show();
	c4.show();	
}
