//============================================================================
// Name        : Assign6Q1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "Book.h"
#include "Tape.h"
#include "Product.h"
#include <iostream>
using namespace std;

int main()
{
	Book b;
	Tape t;

	//Product p1;
	Product *p[2];
	int option;

	for(int i=0;i<2;i++)
	{
		cout << "\n\n1. book\n2. tape\nEnter option: ";
		cin >> option;

		switch(option)
		{
		case 1:
			p[i]=new Book;
			break;
		case 2:
			p[i]=new Tape;
			break;
		default:
			cout<<"\nEnter Correct Choice\n";
		}
		p[i]->accept();

	}


		float price=0, discount=0, bill=0;
	for(int i=0;i<2;i++)
	{
		price = price +p[i]->getPrice();
		discount = discount+p[i]->cal_discount();
		bill = price - discount;
		cout << "price: " << price << endl;
		cout << "discount: " << discount << endl;
		cout << "bill: " << bill << endl;
	}

	for(int i=0;i<2;i++)
	{
		delete p[i];
	}
	return 0;
}
