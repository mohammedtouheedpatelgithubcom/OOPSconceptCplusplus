#include <iostream>
using namespace std;
 
class Complex {
   private:
      int real,imag;
   public:
      Complex():real(0),imag(0) {  }
      Complex(int r, int i):real(r),imag(i) {  }
      friend ostream &operator<<( ostream &out, const Complex &C ); 
	  friend istream &operator>>( istream  &in, Complex &C ); 
};
ostream &operator<<( ostream &out, const Complex &C ) 
{ 
         out << "Real : " << C.real << " Imag : " << C.imag;
         return out;            
}
istream &operator>>( istream  &in, Complex &C ) 
{ 
         in >> C.real >> C.imag;
         return in;            
}
int main() 
{
	Complex C1,C2(2,3);
	
	cout<<C1<<endl;
	cout<<C2<<endl;
	
	cout <<"Enter values of real and imag : ";
   	cin >> C1;
   	cout<<C1<<endl<<C2;
   return 0;
}
