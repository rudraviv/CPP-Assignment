#include <iostream>
#include "Cylinder.h"
using namespace std;
Cylinder::Cylinder():radius(2),height(2)
{
	    res=3.14*radius*radius*height;
		cout<<"\nVolume of Cylinder: "<<res;
}
Cylinder::Cylinder(double radius,double height):radius(2),height(2)
{
	cout<<"\n\nusing Parameterized Constructor";
	res=3.14*radius*radius*height;
	cout<<"\nVolume of Cylinder: "<<res;
}
void Cylinder::getVolume()
{
	cout<<"\nGetting user data";
	cout<<"\n\nEnter Radius and Height of Box";
	cin>>radius>>height;
}
void Cylinder::printVolume()
{
	res=3.14*radius*radius*height;
	cout<<"\n\nVolume of Cylinder: "<<res;
}

