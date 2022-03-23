#include<iostream.h>
#include<conio.h>
void main()
{
	int i,fact=1,no;
	clrscr();

	cout<<"enter the number:-";
	cin>>no;

	for(i=1;i<=no;i++)
	{
	 fact=fact*i;
	}

	cout<<"the factorial of given number is:->"<<fact;
	getch();
}