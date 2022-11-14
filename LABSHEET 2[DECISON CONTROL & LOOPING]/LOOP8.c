/* 9.Write a program to generate following output.
	*****
	****
	***
	**
	*      */
	

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=i;j<=5;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	getch();
}

