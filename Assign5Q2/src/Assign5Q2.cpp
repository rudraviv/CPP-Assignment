//============================================================================
// Name        : Assign5Q2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Date.h"
#include "Employee.h"
#include "Person.h"
using namespace std;

int main() {
/*	Date d;
	d.display();
	Date d1(27,9,1995);
	d1.display();
	Date d3;
	d3.accept();
	d3.display();*/

/*	Person p;
	p.accept();
	p.display();*/


	Date d3(10,10,2017);
	Employee e1(3,50000,"Comp",d3);
	e1.display();


	/*Employee e;
	e.accept();
	e.display();*/
}
