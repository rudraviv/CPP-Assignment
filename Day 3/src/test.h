/*
 * test.h
 *
 *  Created on: 04-Mar-2020
 *      Author: sunbeam
 */

#ifndef TEST_H_
#define TEST_H_

//declaration of class
class Student
{
private:
	int rollNo;
	string str;
	int marks;
public:
	Student(int a,string s,int m);
	void getInfo();
	void DisplayInfo();
};

#endif /* TEST_H_ */
