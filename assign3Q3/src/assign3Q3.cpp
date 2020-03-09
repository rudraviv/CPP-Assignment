#include <iostream>
#include<stdlib.h>
using namespace std;
class PasswordMismatch
{
	string password;
public:
	PasswordMismatch(string pass);
	void CheckPassword(string p);
};
PasswordMismatch::PasswordMismatch(string pass)
{
	password=pass;
}
void PasswordMismatch::CheckPassword(string p)
{
	if(password==p)
	{
		cout<<"Password is Correct";
		exit(0);
	}
	else
		throw "\nInvalid Password\n";
}
int main() {
	string pwd;
	int count=3,f=0;
	PasswordMismatch pass("sunbeam");

	while(count!=0)
	{
		try
		{
			cout<<"\nEnter Password: ";
			cin>>pwd;
			pass.CheckPassword(pwd);
		}catch(const char *str)
		{
			cerr<<str;
			f++;
		}
		count--;
	}
	if(f==3)
	{
		cout<<"\n......GET OUT.........";
	}
	return 0;
}
