//Basic Program of Inheritance
#include <iostream> 
using namespace std; 
class Parent 	//Base class 
{ 
	public: 
		int  a; 
}; 
class Child : public Parent     // Sub class inheriting from Base Class(Parent) 
{ 
	public: 
		int  b; 
}; 
int main() 
{ 

	Parent P;
	Child C; // An object of class child has all data members and member functions of parent
	C.b = 7; 
	C.a = 91; 
	cout << "Child  " << C.a<< endl; 
	cout << "Parent " << C.b << endl; 
	return 0; 
} 

