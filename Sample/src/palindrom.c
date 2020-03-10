#include<stdio.h>
int main()
{
	int a=101;
	int temp;
	while(a>0)
	{
		temp=a%10;
		printf("%d",temp);
		a=a/10;
	}
	return 0;
}

