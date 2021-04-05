//operator overloading for unary pre increment and post increment operators
#include<iostream>
using namespace std;
class sample
{
	int a;
	public:
	sample():a(0) {}	//default constructor sets a=0
	sample(int x):a(x) {}  //parameterized constructor sets a=x
	void show()
	{
		cout<<endl<<a;
	}
	sample operator++() //for pre fix increment
	{
		return ++a;
	}
	sample operator++(int)//for post fix increment 
	{
		return a++;
	}
};
int main()
{
	sample s(10),s1,s2;
	s.show();
	++s;   //increment s.a to 11 and returns 11
	cout<<"\nafter pre increment:";
	s.show(); //prints 11
	s++;   //increment s.a to 12 and returns 10
	cout<<"\nafter post increment:";
	s.show();   //prints 12
	s1=++s;  //increment s.a to 13 and return 13 and assigns s1.a to 13
	cout<<"\ns1 value after pre increment:";
	s1.show();//prints 13
	s2=s++; //incremetn s.a to 14 and return 13 and assigns s1.a to 13
	cout<<"\ns2 value after post increment:";
	s2.show();//prints 13
	
}

