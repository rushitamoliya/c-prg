#include<stdio.h>
#include<conio.h>
void main()
{
const float p=3.14;
int r;
float area;
clrscr();
	printf("enter area r\n");
	scanf("%d",&r);
	area=p*r*r;
	printf("area of circle is %f",area);
getch();
}