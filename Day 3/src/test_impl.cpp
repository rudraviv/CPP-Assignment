#include <iostream>
using namespace std;
#include "test.h"
Student::Student(int a,string s,int m)
{
	rollNo=a;
	str=s;
	marks=m;
	cout<<rollNo<<endl<<str<<endl<<marks;
}
void Student::getInfo()
{

	cout<<"Enter Name:";
	cin>>str;
	cout<<"Enter Roll No: ";
	cin>>rollNo;
	cout<<"Enter Marks: ";
	cin>>marks;
}
void Student::DisplayInfo()
{
    cout<<"\nName: "<<str;
    cout<<"\nRoll No: "<<rollNo;
    cout<<"\nMarks: "<<marks;
}
