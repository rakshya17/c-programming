/*8.Write a program to calculate sum of the series 1+2+3+4+…………+n using recursive 
function.*/

#include<stdio.h>
int sum(int);
void main()
{
	int a,b;
	printf("Enter the number to take out sum:");
	scanf("%d",&a);
	b=sum(a);
	printf("The sum of numbers from 1 to %d is %d.",a,b);
}
int sum(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return n+sum(n-1);
	}
}
