//virtual function for graphics class using array of base pointers
#include<iostream>
using namespace std;
class Graphics
{
	public:
	virtual void draw()
	{
		cout<<endl<<"Graphics Base class";
	}
};
class Rectangle:public Graphics
{
	public:
	void draw()   //Function OVerriding
	{
		cout<<endl<<"Rectangle";
	}
};
class Triangle:public Graphics
{
	public:
	void draw()
	{
		cout<<endl<<"Triangle";
	}
};
class Square:public Graphics
{
	public:
	void draw()
	{
		cout<<endl<<"Square";
	}
};
/*
int main()
{
	Graphics *gp, *gp1, *gp2,*gp3;   //base class pointer
	gp=new Graphics;   
	gp->draw();
	gp1=new Rectangle;   //Rectangle robj;  gp= &robj;
	gp1->draw();
	gp2=new Triangle;
	gp2->draw();
	gp3=new Square;
	gp3->draw();
	
}

int main()
{
	Graphics *gp,gobj;   //base class pointer
	gp=&gobj;    //pointing base class object
	gp->draw();
	Rectangle robj;
	gp=&robj;   //base class pointer to rectangle object
	gp->draw();   //dynamic binding
	Triangle tobj;
	gp=&tobj;
	gp->draw();
	Square sobj;
	gp=&sobj;
	gp->draw();
}
*/

int main()
{
	Graphics gobj;
	Rectangle robj;
	Triangle tobj;
	Square sobj;
	
	Graphics *gp[] = {&gobj,&robj,&tobj,&sobj}; //base class pointer array pointing to all derived objects
	
	for(int i=0;i<4;i++)
		gp[i]->draw();
}


