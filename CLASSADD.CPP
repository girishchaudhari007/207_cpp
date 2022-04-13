#include<iostream.h>
#include<conio.h>
class abc
{
	int n1,n2,n3;
	public:
		void get();
		void add();

};
void abc::get()
{       cout<<"**********input***********\n";
	cout<<"enter the value n1:->";
	cin>>n1;
	cout<<"enter the value n2:->";
	cin>>n2;
}
void abc::add()
{
	cout<<"**********output*********\n";
	n3=n1+n2;
	cout<<"addition of two value:->";
	cout<<n3;
}
void main()
{
	clrscr();
	abc a;
	a.get();
	a.add();
	getch();
}