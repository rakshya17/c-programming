/*4.Write a program to check whether the given number is prime or not using user 
defined function*/

#include<stdio.h>
void primeornot(int);
int main()
{
	int a;
	printf("Enter a number to check prime or not :");
	scanf("%d",&a);
	primeornot(a);
	return 0;
}
void primeornot(int a)
{
	int i,flag=0;
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
		flag++;
    	}
	}
	if(flag==2)
	{
		printf("%d is a prime number.",a);
	}
	else
	{
		printf("%d is not a prime number.",a);
	}
}
