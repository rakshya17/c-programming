//1.Write a program to generate Fibonacci series.

#include<stdio.h>
#include<conio.h>
void main()
{
	int a=0,b=1,c,i,n;
	printf("Enter uptoo which no you wanna print fibonnaci series:");
	scanf("%d",&n);
	printf("%d\t%d\t",a,b);
	for(i=1;i<=n;i++)
	{
		printf("%d\t",c);
		a=b;
		b=c;
		c=a+b;
	}
	getch();
	
}
