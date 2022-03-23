#include<iostream.h>
#include<conio.h>
void main()
{
	int x,y;
	clrscr();
	cout<<"enter the value x";
	cin>>x;
	cout<<"enter the value y";
	cin>>y;
	cout<<"before swapping value x="<<x;
	cout<<"\nbefore swapping value y="<<y;

	x=x+y;
	y=x-y;
	x=x-y;
	cout<<"\nafter swapping value X="<<x;
	cout<<"\nafter swapping value Y="<<y;
	getch();
}
