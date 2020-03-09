
#include <iostream>
#include "account.h"
using namespace std;

int main() {
	Account a[5];
	int ch;
	do
	{
		cout<<"*******MENU*********";
		cout<<"\n1.Accept Details\n2.Print Details \n3.Deposit\n4.Withdraw\n5.Exit";
		cin>>ch;
		switch(ch)
		{
		case 1:
			for(int i=0;i<5;i++)
			{
				a[i].accept();
			}
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		default:cout<<"\nEnter Correct Choice: ";
		}
	}while(ch!=5);

	return 0;
}
