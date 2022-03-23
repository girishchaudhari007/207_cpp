#include<iostream.h>
#include<conio.h>
void main()
{
	int no,i;
	long fact=1;
	clrscr();

	cout<<"enter the number:-"<<endl;
	cin>>no;

	for(i=1;i<=no;i++)
	{
	 fact=fact*i;
	}
	cout<<"the factorial given number is:->"<<fact;
	getch();
}

