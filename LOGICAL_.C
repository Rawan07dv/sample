#include<stdio.h>
#include<conio.h>
void main()
	{
	int a,b,c;
	clrscr();
	printf("Enter Value Of a,b,c");
	scanf("%d %d %d",&a,&b,&c);
	printf("\n\a<b or a>c is %d" ,(a<b && a>c));
	printf("\n\n a<b or a>c is %d",(a<b || a>b));
	printf("\n\n a!b or a!c is %d",!a);
	printf("\n\n a!b or a!c is %d",!b);
	printf("\n\n a!b or a!c is %d",!c);
	getch();
	}