#include<stdio.h>
#include<conio.h>
void main()
{                //1 to n while loop
int i,n;
clrscr();
	printf("enter number\n");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
	printf("\n%d",i);
	i++;
	}

getch();
}