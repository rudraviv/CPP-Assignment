
#include <iostream>
using namespace std;

class Time
{
	int h,m,s;
public:
	Time();
	Time(int h,int m,int s);
	int getHour();
	void setHour(int h);
	int  getMinute();
	void setMinute(int m);
	int  getSecond();
	void setSecond(int s);
	void getData();
	void printData();
};
Time::Time()
{
	h=0;
	m=0;
	s=0;
}
Time::Time(int h,int m,int s)
{
	this->h=h;
	this->m=m;
	this->s=s;
	printData();
}
int Time::getHour()
{
	return h;
}
void Time::setHour(int a)
{
	h=a;

}
void Time::setMinute(int b)
{
	m=b;
}
int Time::getMinute()
{
	return m;
}
void Time::setSecond(int c)
{
	s=c;
}
int Time::getSecond()
{
	return s;
}

void Time::getData()
{
	int hh,mm,ss;
	cout<<"Enter Hour: ";
	cin>>hh;
	setHour(hh);
	cout<<"Enter Minute: ";
	cin>>mm;
	setMinute(mm);
	cout<<"Enter Seconds: ";
	cin>>ss;
	setSecond(ss);

}
void Time::printData()
{
	cout<<"\n";
	cout<<getHour()<<":"<<getMinute()<<":"<<getSecond();
}

int main()
{
	int size;
	Time t,t1(5,10,20);
	cout<<"\nHow many input you will give: ";
	cin>>size;
	Time* t3=new Time[size];
	for(int i=0;i<size;i++)
	{
		t3[i].getData();
	}
	for(int i=0;i<size;i++)
	{
		t3[i].printData();
	}
	return 0;
}
