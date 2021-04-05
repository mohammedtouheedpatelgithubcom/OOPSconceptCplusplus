//Example for function template along with normal function for specific data type
#include<string.h>
#include<iostream>
using namespace std;
template<class T>
void compare(T &x,T &y)
{
	if(x>y)
		cout<<x<<endl;
	else
		cout<<y<<endl;
	
}
void compare(char *x, char *y)
{
	if(strcmp(x,y)>0)
		cout<<x<<endl;
	else
		cout<<y<<endl;
}
int main()
{
	int a=10,b=20;   //template used
	compare(a,b);
	
	char ch1='A',ch2='B';
	compare(ch1,ch2);
	
	double d1=12.3,d2=34.6;
	compare(d1,d2);
	
	char str1[]="cbitit2",str2[]="mgitit"; // normal function is called for the specific char* type
	compare(str1,str2);
	
}
