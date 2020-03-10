/*
 * Tape.h
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */

#ifndef TAPE_H_
#define TAPE_H_
#include "Product.h"

class Tape:public Product {
private:
	int duration;
public:
	Tape();
	Tape(char *title, float price, int duration);
	virtual ~Tape();
	int getDuration() const;
	void setDuration(int duration);

	void accept();
	void display();
	float cal_discount();
};

#endif /* TAPE_H_ */
