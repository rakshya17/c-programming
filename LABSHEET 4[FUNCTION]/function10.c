//11.Write a program to find the sum of first twenty natural numbers using function.

#include<stdio.h>
int sum(int);
void main()
{
	int a=20,b;
	b=sum(a);
	printf("The sum of first twenty natural numbers is %d.",b);
}
int sum(int a)
{
	int i,sum=0;
	for(i=1;i<=a;i++)
	{
	sum=sum+i;	
	}
	return sum;
}
