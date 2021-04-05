#include<iostream>
using namespace std;
template<class T>
class vector
{
	T *v;
	int size;
	public:
	vector(int s)
	{
		size=s;
		v=new T[size];	
	}
	~vector()  {delete v;}
	void read()
	{
		for(int i=0;i<size;i++)
			cin>>v[i];
	}
	void show();	
};
template<class T>
void vector<T>::show()
{
	cout<<endl;
	for(int i=0;i<size;i++)
			cout<<v[i]<<" ";
}
int main()
{
	vector<int> V1(5);
	cout<<"\n Enter integer Elements:";
	V1.read();
	V1.show();
	
	vector<char> V2(3);
	cout<<"\n Enter char Elements:";
	V2.read();
	V2.show();
}
