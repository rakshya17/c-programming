/*15.If a five-digit number is entered through the keyboard, write a 
program to calculate the sum of its digits.*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int number,d,sum=0;
	printf("Enter a 5 digit number :");
	scanf("%d",&number);
	while(number>0)
	{
	d=number%10;
	sum=sum+d;
	number/=10;	
	}
	printf("The sum of the entered 5 digit number is %d",sum);
	getch();
}

