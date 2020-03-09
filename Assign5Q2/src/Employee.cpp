/*
 * Employee.cpp
 *
 *  Created on: 09-Mar-2020
 *      Author: sunbeam
 */

#include "Employee.h"
#include<iostream>
#include<cstring>
#include "Employee.h"
using namespace std;
Employee::Employee():joining(1,1,2020)
{
	id=1;
	sal=10000;
	strcpy(dept,"Administration");
}
Employee::Employee(int a,float b,char *dept,Date& joining)
{
	id=a;
    sal=b;
    strcpy(this->dept,dept);
    this->joining=joining;

}
void Employee::accept()
{
	cout<<"\nEnter ID:";
	cin>>this->id;
	cout<<"\nEnter salary: ";
	cin>>this->sal;
	cout<<"\nEnter Department: ";
	cin>>this->dept;

	Person().accept();
	cout<<"Enter Joining Date: ";
	this->joining.accept();
}
void Employee::display()
{
	cout<<"\nID:"<<id<<" sal: "<<sal<<" dept: "<<dept<<endl;
	//Person().display();
	cout<<"Joining Date: ";
	joining.display();
}

const char* Employee::getDept() const {
	return dept;
}
void Employee::setDept(char *s){
   strcpy(dept,s);
}
int Employee::getId() const {
	return id;
}

void Employee::setId(int id) {
	this->id = id;
}

const Date& Employee::getJoining() const {
	return joining;
}

void Employee::setJoining(const Date& joining) {
	this->joining = joining;
}

float Employee::getSal() const {
	return sal;
}

void Employee::setSal(float sal) {
	this->sal = sal;
}

Employee::~Employee() {
	cout<<"\nEmployee Destructor";
}
