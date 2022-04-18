//programe to demostrate multiple inheritance

#include<iostream.h>
#include<conio.h>
class student
{
	private:
		int rollno;
		char name[15];
	public:
		void get1();
		void put();
};
class mark
{
	protected:
		int m1,m2,m3;
	public:
		void get2();
		void show();
};
class result:public student,public mark
{
	private:
		int total;
	public:
		void gettotal();
		void showtotal();
};
void student::get1()
{
	cout<<"enter the rollno of student";
	cin>>rollno;
	cout<<"enter the name of student";
	cin>>name;
}
void mark::get2()
{
	cout<<"enter the three subject"<<endl;
	cout<<"enter marks of first subject";
	cin>>m1;
	cout<<"enter marks of second subject";
	cin>>m2;
	cout<<"enter marks of third subject";
	cin>>m3;
}
void student::put()
{
	cout<<"rollno of student is:"<<rollno<<endl;
	cout<<"name of student is:"<<name<<endl;
}
void mark::show()
{
	cout<<"three subject are"<<endl;
	cout<<"first subject mark is:"<<m1<<endl;
	cout<<"second subject mark is:"<<m3<<endl;
	cout<<"third subject mark is:"<<m3<<endl;
}
void result::gettotal()
{
	get1();
	get2();
	total=m1+m2+m3;
}
void result::showtotal()
{
	put();
	show();
	cout<<"total marks is:"<<total;
}
void main()
{
	clrscr();
	result g;
	g.gettotal();
	g.showtotal();
	getch();
}

