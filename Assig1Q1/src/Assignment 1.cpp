#include<stdio.h>

typedef struct Date
{
	int dd=0;
	int mm=0;
	int yy=0;
}D;
void AcceptDateFromConsole(D *b);
void PrintDateOnConsole(D *b);
void InitDate(D *b);
int main()
{
	int ch;
	D d;

	InitDate(&d);
	do
	{
	printf("\n\n*****MENU************");
	printf("\n1.Accept Date\n2.Print Date\n3.Exit");
	printf("\nEnter choice: ");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
		AcceptDateFromConsole(&d);
		break;
	case 2:
		PrintDateOnConsole(&d);
		break;
	case 3:
		break;
	default:
		printf("\nEnter Correct Choice \n\n");
		break;
	}
	}while(ch!=3);
	return 0;
}
void InitDate(struct Date* b)
{
	b->dd=1;
	b->mm=1;
	b->yy=2020;
	printf("\n\nGiven Date: %d/%d/%d",b->dd,b->mm,b->yy);
}
void AcceptDateFromConsole(D *b)
{
	printf("Enter Date: ");
	scanf("%d",&b->dd);

	printf("Enter Month: ");
	scanf("%d",&b->mm);
	printf("Enter Year: ");
	scanf("%d",&b->yy);
}

void PrintDateOnConsole(D *b)
{

	printf("\n\nGiven Date: %d/%d/%d",b->dd,b->mm,b->yy);

}

