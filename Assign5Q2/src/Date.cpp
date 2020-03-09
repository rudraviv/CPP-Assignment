/*
 * Date.cpp
 *
 *  Created on: 09-Mar-2020
 *      Author: sunbeam
 */

#include "Date.h"
#include <iostream>
using namespace std;

Date::Date()
{
	date=1;
	month=1;
	year=1970;
	cout<<"\nInside Date () Constructor";

}
Date::Date(int a,int b,int c)
{
	cout<<"\n Date(int a,int b,int c) Constructor";
	date=a;
	month=b;
	year=c;
}
Date::~Date() {
	cout<<"\nInside Date () Destructor";
}
void Date::accept()
{
	cout<<"\nEnter Date(DD-MM-YY): ";
		cin>>date>>month>>year;
}
void Date::display()
{
	cout<<"\n"<<date<<"-"<<month<<"-"<<year;
}

int Date::getDate() const {
	return date;
}

void Date::setDate(int date) {
	this->date = date;
}

int Date::getMonth() const {
	return month;
}

void Date::setMonth(int month) {
	this->month = month;
}

int Date::getYear() const {
	return year;
}

void Date::setYear(int year) {
	this->year = year;
}
