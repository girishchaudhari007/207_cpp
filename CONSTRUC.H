#include<iostream.h>
#include<conio.h>
class demo
{
	private:
		int x;
	public:
		demo() //default
	{
		cout<<"\t the constructor with no paramater";
	}
	demo(int a) //parameterized
	{
	x=a;
	cout<<"\n\tconstructor with one parameter x="<<x;
	cout<<"\n\tsquare of x is"<<x*x;
	}
	demo(int a,int b)//parameterized
	{
	cout<<"\n\tconstructor with two parameter a="<<a<<"b="<<b;
	cout<<"\n\taddition is a+b="<<a+b;
	}
	demo(int a,int b,int c)//parameterized
	{
	cout<<"\n\tconstructor with three parameter a="<<a<<"b="<<b<<"c="<<c;
	cout<<"\n\tadddition is a+b+c="<<a+b+c;
	}
	demo(demo &d) //copy
	{
	cout<<"\n\tcopy of constructor is x=d.x="<<d.x;
	x=d.x;
	cout<<"\n\tthe copied constructor is "<<x;
	}
};
void main()
{
clrscr();
demo d1;
demo d2(10);
demo d3(20,30);
demo d4(20,30,40);
demo d5(d2);
getch();
}