#include<stdio.h>
#include<conio.h>
void main()
{
int x,y;
clrscr();
	printf("enter value of x\n");
	scanf("%d",&x);
	printf("enter value ofy\n");
	scanf("%d",&y);
	x+=y;
	printf("%d is new x\n",x);
	printf("enter value ofy\n");
	scanf("%d",&y);
	x-=y;
	printf("%d is new x\n",x);
	printf("enter value ofy\n");
	scanf("%d",&y);
	x*=y;
	printf("%d is new x\n",x);
	printf("enter value of y\n");
	scanf("%d",&y);
	x/=y;
	printf("%d is new x\n",x);
	printf("eneter value of y\n");
	scanf("%d",&y);
	x%=y;
	printf("%d is new x\n",x);
getch();
}