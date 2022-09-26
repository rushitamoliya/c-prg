#include<stdio.h>
#include<conio.h>
void main()
{
char n ;
clrscr();
	printf("enter character:\n");
	scanf("%c",&n);
	switch(n)
	{
		case 's':
			printf("sunday");
			break;
		case 'm':
			printf("monday");
			break;
		case 't':
			printf("tuesday");
			break;
		case 'w':
			printf("wednesday");
			break;
		case 'h':
			printf("thursday");
			break;
		case 'f':
			printf("friday");
			break;
		case 'a':
			printf("saturday");
			break;
		default:
			printf("no match");
			break;
       }
getch();
}