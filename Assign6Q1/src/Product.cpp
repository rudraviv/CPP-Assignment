/*
 * Product.cpp
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */

#include<iostream>
#include<cstring>
#include "Product.h"
using namespace std;

Product::Product() {
		strcpy(this->title, "");
		this->price = 0.0;
	}
Product::Product(char *title, float price) {
		strcpy(this->title, title);
		this->price = price;
	}
void Product::accept()
{
	cout << "title: ";
	cin >> this->title;
	cout << "price: ";
	cin >> this->price;
}
void Product::display()
{
	cout << "title: " << this->title << endl;
	cout << "price: " << this->price << endl;
}
float Product::getPrice() {
	return price;
}

void Product::setPrice(float price) {
	this->price = price;
}

char* Product::getTitle() {
	return title;
}
void Product::setTitle()
{
}

Product::~Product() {
	// TODO Auto-generated destructor stub
}

