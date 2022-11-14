//14.Write a program to find the sum of digits of any number.

#include<stdio.h>
#include<conio.h>
void main()
{
	int number,sum=0,store,number1;
	printf("Enter the number:");
	scanf("%d",&number);
	number1=number;
	while(number!=0)
	{
		store=number%10;
		sum=sum+store;
		number/=10;
	}
	printf("The sum of digits of %d is %d.",number1,sum);
	getch();
}
