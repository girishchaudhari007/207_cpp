//programe to demostrate encapsulation
		//or
//programe to demostrate class and object

#include<iostream.h>
#include<conio.h>
class product
{
	private:
		int pno;
		char pname[20];
		int pprice;
		char pcompany[20];
	public:
		void get();
		void put();
};
void product :: get()
{
	cout<<"enter product no:->";
	cin>>pno;
	cout<<"enter product name:->";
	cin>>pname;
	cout<<"enter product price:->";
	cin>>pprice;
	cout<<"enter the product company:->";
	cin>>pcompany;
}
void product :: put()
{
	cout<<pno<<"\t\t"<<pname<<"\t\t"<<pprice<<"\t\t"<<pcompany<<endl;
}
void main()
{
	int i;
	clrscr();
	product p[3];
	for(i=0;i<3;i++)
	{
	 p[i].get();
	}
	cout<<"***********************************************************\n";
	cout<<"pno\t\tpname\t\tpprice\t\tpcompany"<<endl;
	cout<<"***********************************************************\n";
	for(i=0;i<3;i++)
	{
	 p[i].put();
	}
	getch();
}