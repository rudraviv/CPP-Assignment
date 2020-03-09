/*
 * employee.h
 *
 *  Created on: 09-Mar-2020
 *      Author: sunbeam
 */

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

class Employee :Person{
private:
	int id;
	float sal;
	char  dept[24];
public:
	Employee();
	 ~Employee();
	 Employee(int a,float b,char *dept,Date& joining);
	 void display();
	 void accept();
	const char* getDept() const;
	void setDept(char *s);
	int getId() const;
	void setId(int id);

	float getSal() const;
	void setSal(float sal);
};

#endif /* EMPLOYEE_H_ */
