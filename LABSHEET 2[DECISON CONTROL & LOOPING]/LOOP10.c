/*11.Write a program to display square of given number if it is odd and cube if 
it is even.*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	printf("Enter a number:");
	scanf("%d",&n);
	
	//printing cube of number if number is even else printing square of no if even
	
	i=(n%2==0)?printf("The cube of %d is %d.",n,n*n*n):printf("The square of %d is %d.",n,n*n);
	getch();
}
