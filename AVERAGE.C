#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,sum,sub,mult;
float avg;
clrscr();
	printf("enter value of i\n");
	scanf("%d",&i);
	printf("value of i is %d\n",i);
	printf(" enter value ofj\n");
	scanf("%d",&j);
	printf("value of j is %d\n",j);
	printf("enter value of k\n");
	scanf("%d",&k);
	printf("value of k is %d\n",k);
	sum=i+j+k;
	printf("\naddition of i,j,k is %d",sum);
	sub=i-j-k;
	printf("\nsubtraction of i,j,k is %d",sub);
	mult=i*j*k;
	printf("\nmlultiplication i,j,k is %d",mult);
	avg=(i+j+k)/3;
	printf("\naverage i,j,k is %.2f",avg);
getch();
}

