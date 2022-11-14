// 9.	Write a program to input three digit numbers and reverse the number

#include<stdio.h>
#include<conio.h>
void main()
{
	int number,d;
	printf("Enter three digit number : ");
	scanf("%d",&number);
	while(number>0)
	{
		d=number%10;
		printf("%d",d);
		number/=10;
	}
	getch();
	
}
