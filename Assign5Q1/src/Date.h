/*
 * Date.h
 *
 *  Created on: 08-Mar-2020
 *      Author: sunbeam
 */

#ifndef DATE_H_
#define DATE_H_

class Date
{
	int date;
	int month;
	int year;
public:
	Date();
	Date(int d,int m,int y);
	 ~Date();
	 void display();
	 void accept();
	int getDate() const;
	void setDate(int date);
	int getMonth() const;
	void setMonth(int month);
	int getYear() const;
	void setYear(int year);
	bool isLeapYear();
};

#endif /* DATE_H_ */
