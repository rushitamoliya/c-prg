#include<stdio.h>
#include<conio.h>
void main()
{
const float p=3.14;
int r;
float wap;
clrscr();
	printf("enter wap r\n");
	scanf("%d",&r);
	wap=(p*r*r)/100;
	printf("wap of circle is %f",wap);
getch();
}