
#include<iostream>
#include "Date.h"
#include "Employee.h"
#include "Person.h"
using namespace std;

int main()
{
	/*Date d;
	d.display();
	Date d1(27,9,1995);
	d1.display();
	Date d3;
	d3.accept();
	d3.display();
	bool check;
	check=d3.isLeapYear();
	if(check==true)
	{
		cout<<"\nLeap Year";

	}else{cout<<"Not a Leap Year";}*/


	Employee e;
	e.display();
	e.accept();
	e.display();
//	char *a="Comp";
//	e.setDept(a);
//	e.display();

	Person p;
	p.accept();
	p.display();
}

