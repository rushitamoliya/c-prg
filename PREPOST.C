#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d;
clrscr();
	printf("enter the post increment\n");
	scanf("%d",&a);
	printf("enter the pre increment\n");
	scanf("%d",&b);
	printf("enter the post decrement\n");
	scanf("%d",&c);
	printf("enter the pre decrement\n");
	scanf("%d",&d);
	a++;
	printf("enter the post increment %d\n" ,a);
	++b;
	printf("enter the pre increment %d\n",b);
	c--;
	printf("enter the post decrement %d\n",c);
	--d;
	printf("enter the pre decrement %d\n",d);




getch();
}