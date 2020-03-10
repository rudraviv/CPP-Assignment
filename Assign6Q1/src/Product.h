/*
 * Product.h
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */

#ifndef PRODUCT_H_
#define PRODUCT_H_

class Product
{
private :
	char title[20];
	float price;
public:
	Product();
	Product(char *title,float price);
	virtual ~Product();
	float getPrice();
	void setPrice(float price);
	char* getTitle();
	void setTitle();

	virtual void accept();
	virtual void display();
	virtual float cal_discount()=0;
};

#endif /* PRODUCT_H_ */
