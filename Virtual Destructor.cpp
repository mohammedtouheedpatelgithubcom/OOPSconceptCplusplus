//  virtual destructor  
#include<iostream> 
using namespace std; 
class base { 
  public: 
    base()      
    { cout<<"Constructing base \n"; } 
    virtual ~base() 
    { cout<<"Destructing base \n"; }      
}; 
class derived: public base 
{ 
  public: 
    derived()     
    { cout<<"Constructing derived \n"; } 
    ~derived() 
    { cout<<"Destructing derived \n"; } 
}; 
int main() 
{ 
  base *b = new derived;  // derived object created with Dynamic memory
  delete b;    //derived object deleted, if we dont use virtual derived destructor will not be called 
} 

