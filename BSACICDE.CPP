//programe to demostrate destructor

#include<iostream.h>
#include<conio.h>
class demo
{
	public:
		~demo();
};
demo::~demo()
{
	cout<<"desctructer called";
}
void main()
{
	clrscr();
	demo d;
	getch();
}
