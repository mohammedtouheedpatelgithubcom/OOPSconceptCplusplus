#include<iostream>
using namespace std;
template<class T>
void show(int a, T x)
{
	cout<<a<<"\t"<<x<<endl;
}
int main()
{
	show(100,20);
	show(200,'E');
	show(300,67.3);
	show(400,"string");
}

