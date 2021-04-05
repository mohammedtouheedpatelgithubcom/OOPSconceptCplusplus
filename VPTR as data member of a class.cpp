//VPTR for virtual function
#include<iostream> 
using namespace std; 
class A { 
	int x;
  public: 
    void show() { }      
}; 
class B {
	int x;
  public: 
    virtual void show() { }      
}; 
int main() 
{ 
  A aobj;
  B bobj; // one pointer variable is added to the object called VPTR
  cout<<"A object size: "<<sizeof(aobj)<<endl;
  cout<<"B object size: "<<sizeof(bobj)<<endl;
} 

