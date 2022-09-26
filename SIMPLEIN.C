#include<stdio.h>
#include<conio.h>
void main()
{

int p,r,t;
float si;
clrscr();
	printf("enter simple interest\n");
	scanf("%d%d%d",&p,&r,&t);
	si=(p*r*t)/100;
	printf("simple intrest is %f",si);
getch();
}