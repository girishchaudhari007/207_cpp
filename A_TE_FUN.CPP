#include<iostream.h>
#include<conio.h>
template<class T>
void add(T a,T b)
{
	T c;
	c=a+b;
	cout<<"c is=:->"<<c<<endl;
}
void main()
{
	clrscr();
	int a,b,c;
	cout<<"enter the two number"<<endl;
	cin>>a>>b;
	add(a,b);

	float p,d;
	cout<<"enter the number"<<endl;
	cin>>p>>d;
	add(p,d);
	getch();
}


