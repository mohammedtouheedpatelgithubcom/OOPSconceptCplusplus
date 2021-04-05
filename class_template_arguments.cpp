//template arguments in class template
//class template
#include<iostream>
using namespace std;
template<class T, int size>
class sample
{
	T x[size];
	public:
		sample(T a) 
		{
			for(int i=0;i<size;i++)
				x[i]=a;
		}
		void show()
		{
			for(int i=0;i<size;i++)
				cout<<endl<<x[i];
		}
};
int main()
{
	sample <int,5> S1(10);
	S1.show();
	sample <char,3> S2('A');
	S2.show();
}
