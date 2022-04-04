//programe to demostrate constructor

#include<iostream.h>
#include<conio.h>
class demo
{
	private:
		int count;
	public:
		demo();		       //constructer declaration
		void print();

};

demo::demo()
{
	cout<<"constructer called"<<endl;
	count=0;
}
void demo::print()
{
	cout<<count<<endl;
}

void main()
{
	clrscr();
	demo d;
	d.print();
	demo d1;
	d1.print();
	demo d2;
	d2.print();
	demo d3;
	d3.print();
	getch();
}
