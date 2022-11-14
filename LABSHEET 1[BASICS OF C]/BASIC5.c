//5.Write a program to divide one integer by another integer and find the quotient and remainder.

#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("Enter a and b : ");
	scanf("%d%d",&a,&b);
	printf("Quotient is %d\n",a/b);
	printf("Remainder is %d\n",a%b);
	getch();
}
