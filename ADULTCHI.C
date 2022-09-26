#include<stdio.h>
#include<conio.h>
void main()
{
int x;
clrscr();
	 printf("enter value\n");
	 scanf("%d",&x);
	 if(x>=18)
	 {
	 printf("adult %d",x);
	 }
	 else
	 {
	 printf("child %d",x);
	 }
getch();
}