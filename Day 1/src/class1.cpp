#include<iostream>

using namespace std;
class Complex
{
private :
	int real;
	int img;
public:
	void accept()
	{
		cout<<"\nEnter the real Value: ";
		cin>>real;
		cout<<"\nEnter the Imaginary Value: ";
		cin>>img;
	}
	void disp()
	{
		cout<<"\nReal value "<<real;
		cout<<"\nImg value "<<img;
	}
};

int main1()
{
	Complex c1;
	c1.accept();
	c1.disp();
	return 0;
}
