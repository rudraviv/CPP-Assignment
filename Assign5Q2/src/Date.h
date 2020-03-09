/*
 * Date.h
 *
 *  Created on: 09-Mar-2020
 *      Author: sunbeam
 */

#ifndef DATE_H_
#define DATE_H_



class Date {
private:
		int date;
		int month;
		int year;
public:
	Date();
	~Date();
	Date(int a,int b,int c);
	void accept();
	void display();
	int getDate() const;
	void setDate(int date);
	int getMonth() const;
	void setMonth(int month);
	int getYear() const;
	void setYear(int year);
};


#endif /* DATE_H_ */
