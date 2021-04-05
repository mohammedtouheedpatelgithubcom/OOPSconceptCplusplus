//Example for function template ovverloading
#include<iostream>
using namespace std;
template<class T>
void show(T x)
{
	cout<<x<<endl;
}
template<class T,class U>
void show(T x,U y)
{
	cout<<x<<"\t"<<y<<endl;
}
void show()
{
	cout<<endl<<"show";
}
int main()
{
	int a=10;
	float b=20.5;   //template used
	show(a,b);  // T with int and U with float
	
	
	char ch1='A';
	show(ch1);
	
	double d1=12.3,d2=34.6;
	show(d1,d2);   // T with double, U with double
	
	char str1[]="cbitit2";
	show(str1);
	
	show();	
}
