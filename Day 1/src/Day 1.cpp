#include<iostream>
using namespace std;

int main2()
{
	char ch='A';
	wchar_t w=L'61',w1;
	cout<<"Enter wchar_t value: ";
	wcin>>w1;
	cout<<w1;
	wcout<<"\n"<<w1;
	wcout<<"\nW: "<<w;

	cout<<"Value of wchar_t variable "<<w;
		cout<<"\n Size of wchar_t variable "<<sizeof(w);
		wcout<<"\n Value of wchar_t variable in char format "<<w;
		cout<<"\n Value of normal char variable "<<ch;

}
