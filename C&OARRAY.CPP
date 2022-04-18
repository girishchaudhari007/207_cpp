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
	cout<<"enter the student name:->";
	cin>>sname;
	cout<<"enter the studernt class:->";
	cin>>sclass;
}
void student :: put()
{
	cout<<rollno<<"\t\t"<<sname<<"\t\t"<<sclass<<endl;
}
void main()
{
     int i;
	clrscr();
	student s[5];
	for(i=0;i<5;i++)
	{
	 s[i].get();
	}
	cout<<"***********************************************************\n";
	cout<<"rollno\t\tsname\t\tsclass"<<endl;
	cout<<"***********************************************************\n";
	for(i=0;i<5;i++)
	{
	 s[i].put();
	}
	getch();
}