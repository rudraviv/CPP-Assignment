/*
 * Person.cpp
 *
 *  Created on: 08-Mar-2020
 *      Author: sunbeam
 */

#include<iostream>

#include "Person.h"
using namespace std;
Person::Person() {
	// TODO Auto-generated constructor stub
	cout<<"\nInside Person Constructor";

}

void Person::accept()
{
	cout<<"\nEnter Name: ";
	cin>>name;
	cout<<"\nAddress: ";

	cin>>address;
	cout<<"\nBirth Date: ";
	bdate.accept();
}
void Person::display()
{
	cout<<"Name: "<<name<<" Address: "<<address<<" Birth Date: ";
	bdate.display();
}
const char* Person::getAddress() const {
	return address;
}
void setAddress(char *a)
{

}
const Date& Person::getBdate() const {
	return bdate;
}

void Person::setBdate(const Date& bdate) {
	this->bdate = bdate;
}

const char* Person::getName() const {
	return name;
}
void setName(char *n)
{
}
Person::~Person() {
	// TODO Auto-generated destructor stub
	cout<<"\nPerson() Destructor";
}

