#include <iostream>
using namespace std;
class MyArray
{
	//private Data Members
	private: 
	int A[10],N;
	public:
	//perameterized constructor
	MyArray(int noe, int v)
	{
		                
		N=noe;
		//Initialize all array elements
		for(int i=0;i<N;i++)
			A[i] = v;
	}
	//operator overloading for subscript operator
	int& operator[](int i)
	{
		return A[i];
	}
};

int main()
{
	int i=0;

	//size of array is 3
	MyArray obj(3,0); 

	//assign value to array elements  0 0 0   0 10 20 
	for(i=0;i<3;i++) 
		obj[i] = i*10;

	cout<<"Array elements are:"<<endl;
	//Print value of array elements
	for(i=0;i<3;i++) 
			cout<<obj[i]<<endl;
	
	
	return 0;
}
