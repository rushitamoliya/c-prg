#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
	 printf("enter year\n");
	 scanf("%d",&a);
	 if(a%4==0&&a%100!=0||a%400==0)
	 {
	 printf(" leap  year" );
	 }
	 else
	 {
	 printf("normal year");
	 }
getch();

}