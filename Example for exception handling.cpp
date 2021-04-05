//divide by zero simple exception handling
#include<iostream>
using namespace std;
int main()
{
        int a,b;
        cout<<"\n enter 2 values:";
        cin>>a>>b;
        try
        {
                if(b==0)
                 throw b; //throwing a integer type value lead to search for catch block with integer argument
				else
                 cout<<"\n quotient is:a/b:"<<a/b;
        }
        catch(int x)
        {
                cout<<"\n denominator cannot be zero";
        }
        catch(char x)
        {
        	cout<<"\n denominator cannot be zero:char catch block";
		}
        
        cout<<endl<<"End of Main Fn";
        return 0;
}


