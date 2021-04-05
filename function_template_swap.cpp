//Example for function template
#include<iostream>
using namespace std;
template<class T>
void xchange(T &x,T &y)
{
	T temp;
	temp=x;
	x=y;
	y=temp;
}

int main()
{
	int a=10,b=20;
	xchange(a,b);
	cout<<"\n a is: "<<a<<" b is: "<<b<<endl;
	
	char ch1='A',ch2='B';
	xchange(ch1,ch2);
	cout<<"\n ch1 is: "<<ch1<<" ch2 is: "<<ch2<<endl;
	
	double d1=12.3,d2=34.6;
	xchange(d1,d2);
	cout<<"\n d1 is: "<<d1<<" d2 is: "<<d2<<endl;
}
