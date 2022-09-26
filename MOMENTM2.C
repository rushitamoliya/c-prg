#include<stdio.h>
#include<conio.h>
void main()
{
char a;
clrscr();
	printf("enter the value of a\n");
	scanf("%c",&a);
	if(a>='a'&&a<='z'||a>='a'&&a>='z')
	{
		printf("%c is an alphabet",a);
	}
	else if(a>='0'&&a<='9')
	{
		printf("%c is the digit",a);
	}
	else
	{
		printf("%c is a special character",a);
	}
getch();
}