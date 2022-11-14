/*12.Two numbers are entered through the keyboard. Write a program to find the value 
of one number raise to the power of another.*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int base,power,i,calculate=1;
	printf("Enter the base and power:");
	scanf("%d%d",&base,&power);
	for(i=1;i<=power;i++)
	{
		calculate=calculate*base;
	}
	printf("%d raised to the power %d is %d.",base,power,calculate);
	getch();
}

