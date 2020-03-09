#include<iostream>
#include"Cylinder.h"
using namespace std;
int main()
{
	Cylinder c;
	Cylinder c2(5,6);
	Cylinder c3;
	c3.getVolume();
	c3.printVolume();
	return 0;
}
