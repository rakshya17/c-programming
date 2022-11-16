//9.Write a program to calculate Fibonacci series using recursive function

#include<stdio.h>
int fibbo(int);
void main()
{
	int a,i;
	printf("Enter upto where you want to take out fibonacci :");
	scanf("%d",&a);

		for(i=1;i<=a;i++)
	{
		printf("%d\t",fibbo(i));
	}
}
int fibbo(int n)
{
	if(n==1||n==2)
	{
		return 1;
	}
	else
	{
		return fibbo(n-1)+fibbo(n-2);
	}
	
}
