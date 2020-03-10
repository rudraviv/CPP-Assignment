/*
 * Book.cpp
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */

#include "Book.h"
#include "Product.h"
#include<iostream>
using namespace std;
Book::Book()
{
		this->pages = 0;
}
void Book::accept()
{
		Product::accept();
		cout << "pages: ";
		cin >> this->pages;
}
void Book::display()
{
	Product::display();
	cout << "pages: " << this->pages << endl;
}
Book::Book(char *title, float price, int pages):Product(title, price)
{
		this->pages = pages;
}
int Book::getPages()
{
	return pages;
}

void Book::setPages(int pages) {
	this->pages = pages;
}
float Book::cal_discount() {
		return this->getPrice() * 0.10;
	}
Book::~Book()
{

}
