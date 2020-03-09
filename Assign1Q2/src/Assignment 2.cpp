//============================================================================
// Name        : Assignment.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
typedef struct Date
{
	int dd=0;
	int mm=0;
	int yy=0;
}D;
void AcceptDateFromConsole(D *d);
void PrintDateOnConsole(D *d);
void InitDate(D *d);
void checkLeap(D *d);
int main() {
	D d;
	int ch;
	InitDate(&d);
	do
	{
	cout<<"\n\n*********MENU*************";
	cout<<"\n1.Accept Date\n2.Print Date \n3.Check Leap Year\n4.Exit \nEnter Choice: ";
	cin>>ch;
	switch(ch)
	{
	case 1:
		AcceptDateFromConsole(&d);
		break;
	case 2:
		PrintDateOnConsole(&d);
		break;
	case 3:
		checkLeap(&d);
		break;
	case 4:
		cout<<"Bye";
		break;
	default:cout<<"Enter Correct Choice";
		break;
	}
	}while(ch!=4);
	return 0;
}
void InitDate(D *d)
{
	d->dd=1;
	d->mm=1;
	d->yy=2020;
}
void AcceptDateFromConsole(D *d)
{
	cout<<"Enter Date: ";
	cin>>d->dd;
	cout<<"Enter Month: ";
	cin>>d->mm;
	cout<<"Enter Year: ";
	cin>>d->yy;
}
void PrintDateOnConsole(D *d)
{
	cout<<"\n\nEntered Date(DD/MM/YY):";
	cout<<d->dd<<"/"<<d->mm<<"/"<<d->yy;
}
void checkLeap(D *d)
{
	if(d->yy%400==0)
	{
		cout<<"Leap Year";
	}
	else if(d->yy%4==0&&d->yy%100!=0)
	{
		cout<<"Leap Year";
	}
	else
	{
		cout<<"Not Leap Year";
	}
}
