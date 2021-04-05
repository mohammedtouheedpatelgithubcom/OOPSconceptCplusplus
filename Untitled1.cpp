/*
 Oops assignment Student database
 roll No:160119737098
 
*/

#include<fstream>
#include<string.h>
#include<iomanip>
#include<iostream>
#include<istream>
using namespace std;
static int count=0;
class Student
{
    
	long long int HTno;
	string name;
	string emailId;
	string branch;
	long long int mobileNo;
	Student *s;
	public:
		Student()
		{
			HTno=1;
	        name="";
	        emailId="";
	        branch="";
	        mobileNo=0;
		}
			void options();
			void display();
			void getdata();
			void Add_Record();
			void Remove_Record();
			void Update_Record();
			void Search_record();
			void Display_all();
			int getno() {return HTno;}
	friend ostream &operator<<( ostream &out, const Student &s ); 
	friend istream &operator>>( istream  &in, Student &s); 
		~Student()
		{
			delete s;
		}
}*s;
		ostream &operator<<( ostream &out, const Student &s )
		{ 
         out << "\n hall ticket no " << s.HTno<<endl<< "\nmobile no " << s.mobileNo<<endl<<"\n name is"<<s.name<<endl<<"\n branch is "<<s.branch<<endl<<"\n email_id is "<<s.emailId;
         return out;            
		}
		istream &operator>>( istream  &in, Student &s ) 
		{	 
         in>>s.HTno>>s.mobileNo;
         getline(in,s.name);
         getline(in,s.branch);
         getline(in,s.emailId);
         return in;            
		}
		void Student::getdata()
		{
 			cout<<"\n Enter hall ticket no"<<endl;
		     cin>>HTno;
		     fflush(stdin);
		     cout<<"\n Enter mobile no"<<endl;
		     cin>>mobileNo;
		      fflush(stdin);
			 cout<<"\n Enter name :"<<endl;
			  cin>>name;
			 cout<<"\n Enter Email id:"<<endl;
			 cin>>emailId;
			 cout<<"\n Enter branch :"<<endl;
			 cin>>branch;
 		}
 			void Student::display()
		{
		 cout<<"=================================================\n";
		 cout<<"Roll No. : "<<HTno<<"\tName  : "<<name<<endl<<"\n";
		 cout<<"branch    : "<<branch<<"\temailid : "<<emailId<<"\tmobile no : "<<mobileNo<<endl<<"\n";
		cout<<"=================================================\n";
		}
			void options()
			{
			cout<<"\n enter 1 for adding record"<<endl;
			cout<<"\n enter 2 for removing record"<<endl;
			cout<<"\n enter 3 for modifying record"<<endl;
			cout<<"\n enter 4 for searching record"<<endl;
			cout<<"\n enter 5 for displaying all  record"<<endl;
			cout<<"\n enter 6 for exit"<<endl;	
			}
			
			void Student::Add_Record()
	        {
		     count=count+1;
		     char ch='y';
 			ofstream fout("stud.dat",ios::out|ios::app|ios::binary);
			 while(ch=='y'||ch=='Y')
			 {
 				 s->getdata();
 				fout.write((char*)&s,sizeof(s));
  				cout<<"\nDo you want to add more : ";
 				 cin>>ch;
			 }
 			cout<<"\nData Appended and Transferred to file...\n";
 			fout.close();
			}
			void Student::Remove_Record()
			{
				int rno;
 				char found='n';
 				fstream fio("stud.dat",ios::in|ios::out|ios::binary|ios::app);
				ofstream fout("temp.dat",ios::out|ios::binary|ios::app);
 				ofstream out("trash.dat",ios::out|ios::binary|ios::app);

 				cout<<"\nEnter the Roll No. whose record is to be deleted: ";
				 cin>>rno;

 				while(fio.read((char*)&s,sizeof(s)))
				 {
				  if(s->getno()==rno)
 				 {
  				 out.write((char*)&s,sizeof(s));
   				found='y';
 				 }
 				 else
 				 {
 				  fout.write((char*)&s,sizeof(s));
				 }
				}
 				if(found=='n') cout<<"\nThe Roll No."<<rno<<" is not in the file...\n";
 				fio.close();
 				fout.close();
 				remove("stud.dat");
				 rename("temp.dat","stud.dat");
				delete s;
				count=count-1;
			}
			void Student::Update_Record()
			{
				 fstream fio("stud.dat",ios::in|ios::out|ios::binary);
				 int rno;
	 			char found='n';
				 fio.seekg(0);
 				cout<<"\nEnter the Roll No. whose record is to be modified: ";
 					cin>>rno;

 					while(fio)
			 		{

 					 int loc=fio.tellg();
 					 fio.read((char*)&s,sizeof(s));
 					 if(s->getno()==rno)
					  {
 						 s->getdata();
						 found='y';
 						 fio.seekg(loc);
 						 fio.write((char*)&s,sizeof(s));
 					 cout<<"\nYour record of Roll No. "<<rno<<" has been updated....";
 					 }
					 }
 					if(found=='n') cout<<"\nThe Class "<<rno<<" is not in the file...\n";
 					fio.close();
				
			}
			void Student::Search_record() 
			{	
				 ifstream fin("stud.dat",ios::in|ios::binary);
 				int rno,i=0;
 				char found='n';
 				cout<<"\nEnter Roll No. to be searched : ";
				 cin>>rno;
	
 			while(fin.read((char*)&s,sizeof(s)))
 			{
 				 if(s->getno()==rno)
 					{
 		 			 s->display();
  					 found='y';
 					 }
 					 i++;
 			}
	 			if(found=='n') cout<<"\nThe Roll No. "<<rno<<" is not in the file...\n";
			 	fin.close();
			}
			void Student::Display_all()
			{
				
             ifstream fin("stud.dat",ios::in|ios::binary);
             while(fin.read((char*)&s,sizeof(s)))
             {
               s->display();
               }
                  fin.close();
                  cout<<"\n number of records are "<<count<<endl;
            } 
		int main()
		{
			Student *s=new Student;
			s->options();
			char choice;
			cin>>choice;
			while(true)
			{
				int k=0;
			switch(choice)
			{
				case '1':
					s->Add_Record();
					break;
				case '2':
					s->Remove_Record();
					break;
				case '3':
					s->Update_Record();
					break;
				case '4':
					s->Search_record(); 
					break;
				case '5':
					s->Display_all();
					break;
				case '6':
					k=1;
					break;
				default:
					cout<<"\n invalid input";		
			}
			if(k==1)
			{
			cout<<"\n Exit";
			break;
			}
  			options();
 			 cin>>choice;
		}
		
}
