/*
 * Book.h
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */

#ifndef BOOK_H_
#define BOOK_H_
#include "Product.h"

class Book :public Product{
private:
	int pages;

public:
	Book();
	Book(char *title, float price, int pages);
	virtual ~Book();
	int getPages();
	void setPages(int pages);

	void accept();
	void display();
	float cal_discount();

};

#endif /* BOOK_H_ */
