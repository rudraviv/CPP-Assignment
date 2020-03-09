#include<iostream>
using namespace std;
class Date
{
private:
	int d,m,y;
public:
	void PrintDateOnConsole();
	void AcceptDateFromConsole();
	bool IsLeapYear();
};
void Date::AcceptDateFromConsole()
{
	cout<<"Enter Date: ";
	cin>>d;
	cout<<"Enter Month: ";
	cin>>m;
	cout<<"Enter Year: ";
	cin>>y;
}
void Date::PrintDateOnConsole()
{
   cout<<"\nEntered Date: ";
   cout<<d<<"/"<<m<<"/"<<y;
}
bool Date::IsLeapYear()
{
		if(y%400==0)
		{
			cout<<"\nLeap Year";
		}
		else if(y%4&&y%4!=100)
		{
			cout<<"\nLeap Year";
		}
		else
		{
			cout<<"\nNot Leap Year";
		}
}

int main()
{
	int ch;
	Date d;
	do
	{
		cout<<"\n*********MENU************";
		cout<<"\n1.Accept Date\n2.Print Date \n3.Check Leap\n4.Exit\nEnter Choice: ";
		cin>>ch;
		switch(ch)
		{
		case 1:
			d.AcceptDateFromConsole();
			break;
		case 2:
			d.PrintDateOnConsole();
			break;
		case 3:
			d.IsLeapYear();
			break;
		case 4:
			cout<<"\n\nBye";
			break;
		default:
			cout<<"\nEnter Correct Choice:";
			break;
		}

	}while(ch!=4);
	return 0;
}
