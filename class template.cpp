//class template
#include<iostream>
using namespace std;
template<class T>
class sample{
	T x;
	public:
		sample(T a):x(a) {}
		void show()
		{
			cout<<endl<<x;
		}
};
int main()
{
	sample<int> S1(10);
	S1.show();
	sample<char> S2('A');
	S2.show();
}
