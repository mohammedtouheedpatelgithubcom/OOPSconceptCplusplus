//overloading new and delete operators
#include<iostream>
using namespace std;
class sample
{
	int *my_v;
	public:
	void * operator new(size_t s)
	{
		sample *v;
		v=::new sample;
		v->my_v= new int[5];
		return v;
	}
	void operator delete(void *p)
	{
		sample *v;
		v=(sample *) p;
		delete v->my_v;
		::delete v; 
	}
	void read_data()
	{
		cout<<endl<<"enter data";
		for(int i=0;i<5;i++)
				cin>>my_v[i];
	}
	void display()
	{
		cout<<endl<<"The elements are:";
		for(int i=0;i<5;i++)
			cout<<endl<<my_v[i];
	
	}
};
int main()
{
	sample *V_obj=new sample;
	V_obj->read_data();
	V_obj->display();
	delete V_obj;
}

