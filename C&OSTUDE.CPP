//programe to demostrate encapsulation
		//or
//programe to demostrate class and object

#include<iostream.h>
#include<conio.h>
class student
{
	private:
		int rollno;
		char sname[20];
		char sclass[20];
	public:
		void get();
		void put();
};
void student :: get()
{
	cout<<"enter rollno:->";
	cin>>rollno;
	cout<<"enter the student name";
	cin>>sname;
	cout<<"enter the studernt class";
	cin>>sclass;
}
void student :: put()
{
	cout<<rollno<<"\t\t"<<sname<<"\t\t"<<sclass<<endl;
}
void main()
{
	clrscr();
	student s1,s2,s3;
	s1.get();
	s2.get();
	s3.get();
	cout<<"***********************************************\n";
	cout<<"rollno\t\tname\t\tclass"<<endl;
	cout<<"***********************************************\n";
	s1.put();
	s2.put();
	s3.put();
	getch();
}