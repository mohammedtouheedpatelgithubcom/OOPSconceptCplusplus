//Illustration on virual base class
#include<iostream>
using namespace std;
class student
{
	  protected:
		int roll_number;
	  public :
	    void get_number(int a)
    	{
			      roll_number=a;
    	}
		void put_number(void)
    	{
		      cout<<"rollnumber :"<<roll_number<<"\n";
    	}
};
class test : virtual public student
{
	    protected:
       		float p1,p2;
	    public:
		void get_marks(float x,float y)
   		{
		       p1=x;
		       p2=y;
   		}
		void put_marks(void)
   		{
		      cout<<"marks"<<"\n"<<"part1:"<<p1<<"\npart2:"<<p2<<endl;
   		}
};
class sports : public virtual student
{
	    protected :
		     float score;
	    public:
		    void get_score(float s)
     	    {
				score=s;
      		}
		    void put_score(void)
     		{
			    cout<<"sport wt:"<<score<<"\n";
     		}
};
class result: public test,public sports
{
	    float total;
	    public:
		void display(void)
		{
			total=p1+p2+score;
			put_number(); //one copy must be available
			put_marks();
			put_score();
			cout<<"total score:"<<total<<"\n";
		}
};
int main()
{
	result s1;
	s1.get_number(678);
	s1.get_marks(77.5,57.5);
	s1.get_score(8.0);
	s1.display();
	return 0;
}


