#include<iostream.h>
#include<conio.h>
void swap(int *x,int *y);
void main()
{
	int a,b;
	clrscr();

	cout<<"enter the value A"<<endl;
	cin>>a;
	cout<<"enter the value B"<<endl;
	cin>>b;

	cout<<"before swapping\n";
	cout<<a<<"\t"<<b<<endl;
	swap(&a,&b);
	cout<<"after swapping"<<endl;
	cout<<a<<"\t"<<b<<endl;
	getch();
}
	void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}