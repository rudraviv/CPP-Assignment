#include<iostream>
using namespace std;

class Student
{
	private:
		int id;
		int marks;
	public:
		void accept(int id,int marks);
		void disp();
};
void Student::accept(int i,int m)
{
	id=i;
	marks=m;
}
void Student::disp()
{
	cout<<"ID: "<<id<<endl;
	cout<<"Marks: "<<marks<<endl;
}
int main()
{
	Student st;
	st.accept(1,85);
	st.disp();
	return 0;
}
