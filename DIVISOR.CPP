#include<iostream.h>
#include<conio.h>
void main()
{
	int dividnet,divisor,quotient,remainder;
	clrscr();

	cout<<"enter divident";
	cin>>dividnet;
	cout<<"enter divisor";
	cin>>divisor;

	quotient=dividnet/divisor;
	remainder=dividnet%divisor;

	cout<<"quotient is"<<quotient;
	cout<<"\nremainder is"<<remainder;
	getch();
}