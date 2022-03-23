#include<iostream.h>
#include<conio.h>
void main()
{
	int no,t1=0,t2=1,nextno;
	clrscr();

	cout<<"enter the limit of series\n";
	cin>>no;

	cout<<t1;
	cout<<t2;
	nextno=t1+t2;
	while(nextno<no)
	{
	cout<<nextno;
	t1=t2;
	t2=nextno;
	nextno=t1+t2;
	}
	getch();
}