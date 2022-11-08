#include<iostream.h>
#include<conio.h>

class Fruit
{
	int num;
	char ch;
	public:
		Fruit()
		{
			ch=' ';
			num=0;
		}
	friend class Basket; //Friend class
};

class Basket
{
	public:
		Fruit getData(Fruit ob) //Fruit as Return Type because it will return ob to Fruit
		{
			cout<<"\nEnter Any Character : ";
			cin>>ob.ch;
			cout<<"\nEnter Any Number : ";
			cin>>ob.num;
			return ob;
		}
		void displayData(Fruit ob)
		{
			cout<<"\nShowing Data ";
			cout<<"\nCharacter : "<<ob.ch;
			cout<<"\nNumber : "<<ob.num;
		}
};

void main()
{
	clrscr();
	Fruit f1;
	Basket b1;
	Fruit f2=b1.getData(f1); // to store object
	b1.displayData(f2);
	getch();
}
