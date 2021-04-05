//function template for user defined data types
#include<iostream>
using namespace std;
struct student
{
	int rno;
	char gender;
	float per;
};
ostream & operator<<(ostream &out, student &s)  //   cout<<s; if s is variable of student structure
{
	cout<<endl<<"rno, gender, percentage  :"<<s.rno<<"\t"<<s.gender<<"\t"<<s.per;
}

template<class T>
void show(T x)
{
	cout<<x<<endl;
}

int main()
{
	student s={101,'M',93.2};
	show(s);
	int a=100;
	show(a);
	char ch='E';
	show(ch);
}
