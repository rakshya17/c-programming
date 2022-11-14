//13.Write a program to fond the product of digits of any number

#include<stdio.h>
#include<conio.h>
void main()
{
	int number,store,product=1,number1;
	printf("Enter a number of any digit:");
	scanf("%d",&number);
	number1=number;
	while(number!=0)
	{
		store=number%10;
		product=product*store;
		number=number/10;
		
	}
	printf("The product of digits of %d is %d.",number1,product);
	getch();
}
