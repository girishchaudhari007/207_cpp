//programe to demostrate destructor & constructer

#include<iostream.h>
#include<conio.h>
class demo
{
	private:
		int x,y;
	public:
		demo();
		demo(int a,int b);
		demo(demo &q);
		~demo();
		void show();
};
demo::demo(demo &q)
{
	x=q.x;
	y=q.x;
}
demo::demo()
{
	cout<<"constructer called"<<endl;
}
demo::demo(int a,int b)
{
	x=a;
	y=b;
}
void demo::show()
{
	cout<<"value of x is:->"<<x<<endl;
	cout<<"value of y is:->"<<y<<endl;
}
demo::~demo()
{
	cout<<"desctructer called"<<endl;
}
void main()
{
	clrscr();
	demo d;
	demo d1(10,20);
	d1.show();
	demo g(d1);
	g.show();
	getch();
}
