//Multiple arguments
#include<iostream>
using namespace std;
template<class T, class U>
void show(T x, U y)
{
	cout<<x<<"\t"<<y<<endl;
}
int main()
{
	show(100,"CBIT");//int,char *
	show('M',56.4);  // char, float
	show(9.2,124); //flaot, int
	
}

