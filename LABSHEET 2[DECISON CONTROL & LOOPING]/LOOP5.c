/*6.Write a program to print all the numbers from 10 to 1 
and find their sum using while loop*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,sum=0;
	for(i=10,j=1;i>=1,j<=10;i--,j++)
	{
		printf("%d\n",i);
		sum=sum+j;
	}
	printf("+______");
	printf("\nsum is %d.",sum);
	getch();
}
