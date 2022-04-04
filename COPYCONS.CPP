//programe to demostrate copy constructer

#include<iostream.h>
#include<conio.h>
class demo
{
	private:
		int a,b;
	public:
		demo(int x,int y);
		demo(demo &q);
		void print();
};
demo :: demo(int x,int y)
{
	a=x;
	b=y;
}
void demo::print()
{
	cout<<"value of A is:->"<<a<<endl;
	cout<<"value of B is:->"<<b<<endl;
}
demo::demo(demo &q)
{
	a=q.a;
	b=q.b;
}
void main()
{
	clrscr();
	demo d(10,20);
	d.print();
	demo d1(d);  	//copy constructer value
	d1.print();
	getch();
}