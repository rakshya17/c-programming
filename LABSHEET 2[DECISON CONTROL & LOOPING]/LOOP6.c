//7.Write a program to calculate factorial of a given number.

#include<stdio.h>
#include<conio.h>
void main()
{
	long int number,factorial=1;
	int i;
	printf("Enter a number to find out factorial :");
	scanf("%ld",&number);
	for(i=1;i<=number;i++)
	{
		factorial=factorial*i;
	}
	printf("FACTORIAL OF %ld",number);
	printf("\n%ld ! = %ld",number,factorial);
	getch();
}
