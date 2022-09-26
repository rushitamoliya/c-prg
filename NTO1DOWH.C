#include<stdio.h>
#include<conio.h>
void main()
{                //n to 1 do while loop
int i,n;
clrscr();
	printf("enter number\n");
	scanf("%d",&n);
	i=10;
	do
	{
	printf("\n%d",i);
	i--;
	}
	while(i>=n);

getch();
}