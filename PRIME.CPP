#include<iostream.h>
#include<conio.h>
class prime
{
	int n,f;
	public:
	void get();
	void cal();
};
 void prime::get()
 {
	cout <<"\n enter the number";
	cin>>n;

}
void prime:: cal()
{
	int f=1;
	int i;
	for(i=2;i<=n-1;i++)
	{
		if(n%i==0)

		f=0;
		}
	if(f==0)
		cout<<"\nthe number is not prime";
		else
		cout<<"the number is prime";
}
void main()
{

	clrscr();
	prime p1;
	p1.get();
	p1.cal();
	getch();
}
