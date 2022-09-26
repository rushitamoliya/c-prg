#include<stdio.h>
#include<conio.h>
void main()
{                //1 to n do while loop
int i,n;
clrscr();
	printf("enter number\n");
	scanf("%d",&n);
	i=1;
	do
	{
	printf("\n%d",i);
	i++;
	}
	while(i<=n);

getch();
}