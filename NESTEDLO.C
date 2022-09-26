#include<stdio.h>
#include<conio.h>
void main()
{                     //4 nested looping
int a,b,c,d,max;
clrscr();
	printf("enter any number\n");
	scanf("%d",&a);
	printf("enter any number\n");
	scanf("%d",&b);
	printf("enter any number\n");
	scanf("%d",&c);
	printf("enter any number\n");
	scanf("%d",&d);
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
			max=a;
			}
			else
			{
			max=d;
			}
		}
		else
		{
			if(c>d)
			{
			max=c;
			}
			else
			{
			max=d;
			}
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
			max=b;
			}
			else
			{
			max=d;
			}
		}
		else
		{
			if(c>d)
			{
			max=c;
			}
			else
			{
			max=d;
			}
		}
	}
	printf("%d is maximum",max);
getch();
}

