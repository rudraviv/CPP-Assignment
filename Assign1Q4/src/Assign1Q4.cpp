#include<iostream>
using namespace std;
class Box
{
private:
	float l,b,h;
public:
	Box();
	void AcceptDimensions();
	void PrintVolume();
};

Box::Box()
{
	l=2,b=3,h=4;
}
void Box::AcceptDimensions()
{
	cout<<"Enter length,breadth,height of Box";
	cin>>l>>b>>h;
	cout<<l<<b<<h;
}
void Box::PrintVolume(){
	double res;
	res=l*b*h;
	cout<<"Box Volume: "<<res;
}
int main()
{
	Box b;
	int ch;
	do
	{
	cout<<"\n\n************MENU***************";
	cout<<"\n1.Accept Dimensions of Box\n2.Print Volume of Box\n3.Exit\nEnter choice: ";
	cin>>ch;

	switch(ch)
	{
	case 1:
		b.AcceptDimensions();
		break;
	case 2:
		b.PrintVolume();
		break;
	case 3:
		cout<<"Bye";
		break;
	}
	}while(ch!=3);
	return 0;
}
