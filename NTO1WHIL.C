#include<stdio.h>
#include<conio.h>
void main()
{                //n to 1 while loop
int i,n;
clrscr();
	printf("enter number\n");
	scanf("%d",&n);
	i=10;
	while(i>=n)
	{
	printf("\n%d",i);
	i--;
	}

getch();
}