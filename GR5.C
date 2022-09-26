#include<stdio.h>
#include<conio.h>
void main()
{
int hra,da,ta,bs,gs;
clrscr();
	printf("enter the value of bs\n");
	scanf("%d",&bs);
	hra=(bs*10)/100;
	printf("enter hra %d\n",hra);
	da=(bs*5)/100;
	printf("enter da %d\n",da);
	ta=(bs*8)/100;
	printf("enter ta %d\n",ta);
	gs=hra+da+ta+bs;
	printf("enter gs %d",gs);

 getch();
}