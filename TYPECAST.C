#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,e;
float per;
clrscr();
	printf("enter english marks a\n");
	scanf("%d",&a);
	printf("enter maths marks b\n");
	scanf("%d",&b);
	printf("enter biology marks c\n");
	scanf("%d",&c);
	printf("enter physics marks d\n");
	scanf("%d",&d);
	printf("enter chemistry marks e\n");
	scanf("%d",&e);
	per=((float)a+(float)b+(float)c+(float)d+(float)e)/5;
	printf("per is %f",per);

getch();
}
