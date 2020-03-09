/*
 * Cylinder.h
 *
 *  Created on: 04-Mar-2020
 *      Author: sunbeam
 */

#ifndef CYLINDER_H_
#define CYLINDER_H_

class Cylinder
{
private:
	float radius,height,res;
public:
	Cylinder();
	Cylinder(double radius,double height);
	void getVolume();
	void printVolume();
};




#endif /* CYLINDER_H_ */
