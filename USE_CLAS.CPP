//programe to demostreate encapsulation using of class

#include<iostream.h>
#include<conio.h>
class demo
{
	int m1,m2,rollno,total;
	float avg;
	char name[20];
	public:
		void get();
		void put();
};
void demo::get()
{
	cout<<"enter the rollno:\n";
	cin>>rollno;
	cout<<"enter the name:\n";
	cin>>name;
	cout<<"enter the mark in subject1:\n";
	cin>>m1;
	cout<<"enter the mark in subject2:\n";
	cin>>m2;
};
void demo::put()
{       total=0;
	total=m1+m2;
	avg=total/2;
	cout<<"\n";
	cout<<"********************output******************"<<endl;
	cout<<"rollno no is:"<<rollno<<endl;
	cout<<"name is:"<<name<<endl;
	cout<<"mark in subject 1:"<<m1<<endl;
	cout<<"mark in subject 2:"<<m2<<endl;
	cout<<"total is:"<<total<<endl;
	cout<<"avg is:"<<avg<<endl;
}
void main()
{
	clrscr();
	demo r;
	r.get();
	r.put();
	getch();
}