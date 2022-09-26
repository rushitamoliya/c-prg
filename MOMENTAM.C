#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
	printf("enter a is even or odd\n");
	scanf("%d",&a);
	(a%2==0)?printf("even"):printf("odd");
getch();
}