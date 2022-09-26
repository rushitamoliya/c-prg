#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d;
clrscr();
	printf("enter any number\n");
	scanf("%d",&a);
	printf("enter any number\n");
	scanf("%d",&b);
	printf("enter any number\n");
	scanf("%d",&c);
	printf("enter any number\n");
	scanf("%d",&d);
	if(a>b&&a>c)
	{
		printf("a");
	}
	else if(b>c&&b>d)
	{
		printf("b");
	}
	else if(c>d&&c>a)
	{
		printf("c");
	}
	else
	{
		printf("%d");
	}

getch();
}

