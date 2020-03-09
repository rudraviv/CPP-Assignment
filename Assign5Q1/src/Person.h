/*
 * Person.h
 *
 *  Created on: 08-Mar-2020
 *      Author: sunbeam
 */

#ifndef PERSON_H_
#define PERSON_H_
#include "Date.h"

class Person
{
private:
	char name[40];
	char address[40];
	Date bdate;
public:
	Person();
	 ~Person();
	const char* getAddress() const;
	void setAddress(char *a);
	const Date& getBdate() const;
	void setBdate(const Date& bdate);
	const char* getName() const;
	void setName(char *n);
	void accept();
	void display();
};

#endif /* PERSON_H_ */
