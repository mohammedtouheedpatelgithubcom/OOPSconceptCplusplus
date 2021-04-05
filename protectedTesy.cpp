#include<iostream>
using namespace std;
class T
{
	protected:
	void show()
	{
	 int a=10;
	 cout<<a;
	}
};
class S : public class T
{
	public:
	int w=20;
	void display()
	{
		T o;
	cout<<o.a;
    }
};
int main()
{
	S q;
	cout<<q.w;
}
