#include<iostream.h>
#include<conio.h>
void main()
{
	int rev=0,n,r,p;
	clrscr();

	cout<<"enter the number";
	cin>>n;
	p=n;

	while(n>0)
	{
	r=n%10;
	rev=(rev*10)+r;
	n=n/10;
	}
	if(rev==p)
	{
	 cout<<"number is pallindrome";
	}
	else
	{
	 cout<<"number is not pallindrome";
	}
	getch();
}

