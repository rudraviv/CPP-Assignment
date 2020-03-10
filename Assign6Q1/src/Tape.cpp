/*
 * Tape.cpp
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */

#include "Tape.h"
#include "Product.h"
#include<iostream>
using namespace std;
Tape::Tape() {
		this->duration = 0;
	}
Tape::Tape(char *title, float price, int duration):Product(title, price)
{
		this->duration = duration;
}
void Tape::accept()
{
		Product::accept();
			cout << "duration: ";
			cin >> this->duration;
}
void Tape::display()
{
	Product::display();
			cout << "duration: " << this->duration << endl;
}
int Tape::getDuration() const {
	return duration;
}

void Tape::setDuration(int duration) {
	this->duration = duration;
}
float Tape::cal_discount() {
		return this->getPrice() * 0.05;
	}
Tape::~Tape() {
	// TODO Auto-generated destructor stub
}

