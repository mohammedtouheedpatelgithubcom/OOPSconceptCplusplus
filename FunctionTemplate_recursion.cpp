//Example for function template ovverloading
#include<iostream>
using namespace std;
template<class T>
T rfact(T x)
{
	if(x==1)
		return 1;
	return x*rfact(x-1);
}
int main()
{
	cout<<rfact(5);
	
}
