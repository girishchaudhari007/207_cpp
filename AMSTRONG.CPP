#include<iostream.h>
#include<conio.h>
void main()
{
	int i,n,sum=0,r,temp;
	clrscr();

	cout<<"enter the number";
	cin>>n;
	temp=n;

	while(n>0)
	{
	 r=n%10;
	 sum=sum+(r*r*r);
	 n=n/10;
	}
	if(temp==sum)
	{
	 cout<<"number is amstrong";
	}
	else
	{
	 cout<<"number is not amstrong";
	}
	getch();
}