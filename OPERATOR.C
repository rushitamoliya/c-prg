#include<stdio.h>
#include<conio.h>
void main()
{                     //5 maximumnumber
int a,b,c,d,e;
clrscr();
	printf("enter any number\n");
	scanf("%d",&a);
	printf("enter any number\n");
	scanf("%d",&b);
	printf("enter any number\n");
	scanf("%d",&c);
	printf("enter any number\n");
	scanf("%d",&d);
	printf("enter any number\n");
	scanf("%d",&e);
	if(a>b&&a>c)
	{
		printf("a");
	}
	else if(b>c&&b>d)
	{
		printf("b");
	}
	else if(c>d&&c>e)
	{
		printf("c");
	}
	else if(d>e&&e&&a)
	{
		printf("d");
	}
	else
	{
		printf("e");
	}
getch();
}

