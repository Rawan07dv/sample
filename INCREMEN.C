#include<stdio.h>
#include<conio.h>
void main()
	{
	int a,b=0;
	clrscr();
	printf("Enter value of a:");
	scanf("%d",&a);
	++a;
	printf("\n\nthe value of a= %d",a);
	b=a++;
	printf("\n\nthe value of b= %d",b);
	b=++a;
	printf("\n\n the value of b= %d",b);
	getch();
	}