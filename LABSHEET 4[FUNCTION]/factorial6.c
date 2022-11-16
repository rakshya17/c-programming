//7.Write a program to display factorial of a given number using recursive function.

#include<stdio.h>
int fact(int);
void main()
{
	int a,b;
	printf("Enter the number to calculate factorial:");
	scanf("%d",&a);
	b=fact(a);
	printf("The factorial of the %d is %d.",a,b);
}
int fact(int n)
{
	if(n==0)
	return 1;
	else
	return n*fact(n-1);
}
