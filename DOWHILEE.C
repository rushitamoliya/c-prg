#include<stdio.h>
#include<conio.h>
void main()
{                //table do while loop
int i=1,n;
clrscr();
	printf("enter any number\n");
	scanf("%d",&n);
	printf("multiplication table of %d\n",n);
	do
	{
	printf("\n%d*%d=%d",n,i,n*i);
	i++;
	}
	while(i<=10);

getch();
}