
//Exception Handling.
#include <iostream>
using namespace std;
double division(int a,int b);
int main() {
	int x,y;
	cout<<"Enter value 1:"<<endl;
	cin>>x;
	cout<<"Enter value 2:"<<endl;
	cin>>y;
	double z=0;
	try
	{
		z=division(x,y);
		cout<<z<<endl;
	}catch(const char* msg)
	{
		cerr<<msg<<endl;
	}
}
double division(int a, int b)
{
	if(b==0)
	{
		throw"Divide by Zero Error";
	}
	return (a/b);
}
