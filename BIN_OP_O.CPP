//programe to demostrate oprator overloading using friend function

#include<iostream.h>
#include<conio.h>
class binary
{
	private:
		int a,b;
	public:
		void get();
		binary operator+(binary &b);
		void show();
};
void binary::get()
{
	cout<<"enter the value a=";
	cin>>a;
	cout<<"enter the value b=";
	cin>>b;
}
binary binary::operator+(binary &B)
{
	binary B3;
	B3.a=a+B.a;
	B3.b=b+B.b;
	return(B3);
}
void binary::show()
{
	cout<<"**********************************************************\n";
	cout<<"addition of B1&B2 is="<<endl;
	cout<<"value of a="<<a<<endl;
	cout<<"value of b="<<b<<endl;
	cout<<"***********************************************************\n";
}
void main()
{
	clrscr();
	binary B1,B2,B4;
	B1.get();
	B2.get();
	B4=B1+B2;
	B4.show();
	getch();
}