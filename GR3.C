#include<stdio.h>
#include<conio.h>
void main()
{
float celcius, feranhit;
clrscr();
	printf(" enter value of celcius is :\n");
	scanf("%f",&celcius);
	feranhit=(celcius*1.8)+32;
	printf("result of celcius and feranhit is %2.2f\n",feranhit);
 getch();
}