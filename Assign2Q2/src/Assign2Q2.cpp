#include<iostream>
using namespace std;

class Student
{
public:
	int rollno,marks[3];
	float percent;
	char gender;
	string name;
	void Accept();
	void Print();
};
void Student::Accept()
{
	int temp;
	cout<<"Enter roll number: ";
	cin>>rollno;
	cout<<"Enter Name: ";
	cin>>name;
	cout<<"Enter Gender(M/F): ";
	cin>>gender;
	cout<<"Enter marks of 3 subjects";
	for(int i=0;i<3;i++)
	{
		cin>>marks[i];
	}

	cout<<"\nRecord Inserted Successfully"<<endl;
}
void Student::Print()
{
 int temp=0;
	cout<<"Roll No: "<<rollno<<endl;
	cout<<"Name: "<<name<<endl;
	cout<<"Gender: "<<gender<<endl;
	for(int i=0;i<3;i++)
		{
			temp=temp+marks[i];

		}
		percent=temp*100/300;
	cout<<"Percentage: "<<percent<<endl;
	cout<<"************************"<<endl;

}
void Sorting(Student *a,int p)
{
	Student temp;
	for(int i=0;i<p;i++)
	{
		for(int j=1;j<p;j++)
		{
			if(a[i].rollno>a[j].rollno)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(int i=0;i<p;i++)
			{
				cout<<a[i].rollno<<endl;
				cout<<a[i].name<<endl;
				cout<<a[i].gender<<endl;
				cout<<a[i].percent<<endl;
				cout<<"***************"<<endl;
			}
}
void Search(Student *a,int s)
{

	int id,flag=0;
	cout<<"Enter roll no of student to search: ";
	cin>>id;
	for(int i=0;i<s;i++)
	{
		if(a[i].rollno==id)
		{
			cout<<"\n****FOUND******";
			cout<<"\nRoll No: "<<a[i].rollno;
			cout<<"\nName: "<<a[i].name;
			cout<<"\nGender: "<<a[i].gender;
			cout<<"\nMarks: ";
			for(int j=0;j<3;j++)
			{
				cout<<" "<<a[i].marks[j];
			}


			cout<<"\nPercent: "<<a[i].percent;
			flag=1;
			return;
		}

	}
	if(flag==0)
	{
		cout<<"\n\nSorry Record Not Found.....\n";
		return;
	}
}
int main()
{
	Student s[10],s1;
	int ch,size;
	do
	{
		cout<<"\n*********MENU*********";
		cout<<"\n1.Accept\n2.Print\n3.Search\n4.Exit\nEnter Choice: ";
		cin>>ch;
		switch(ch)
		{
		case 1:
			cout<<"\nHow many record you want to insert: ";
			cin>>size;
			for(int i=0;i<size;i++)
			{
				s[i].Accept();
			}
			break;
		case 2:
			for(int i=0;i<size;i++)
			{
				s[i].Print();
			}
			break;
		case 3:
			Sorting(s,size);
			Search(s,size);
			break;
		case 4:
			break;
		default:cout<<"Enter Valid Choice: ";
		}
	}while(ch!=4);
	return 0;
}


