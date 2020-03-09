/*
 * Date.cpp
 *
 *  Created on: 08-Mar-2020
 *      Author: sunbeam
 */

#include<iostream>
#include "Date.h"
using namespace std;
Date::Date() {
	date=1;
	month=1;
	year=1950;
}
void Date::display()
{
	cout<<"\n"<<date<<"-"<<month<<"-"<<year;
}
void Date::accept()
{
	cout<<"\nEnter Date(DD-MM-YY): ";
	cin>>date>>month>>year;
}
Date::Date(int d,int m,int y):date(d),month(m),year(y){}

Date::~Date() {
	cout<<"\nDate() Destructor";
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
bool Date::isLeapYear()
{
	if(year%4==0)
	{
		return true;
	}
	else if(year%400==0&&year%100!=0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
