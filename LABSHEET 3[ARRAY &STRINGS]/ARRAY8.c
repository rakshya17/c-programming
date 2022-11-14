// Write a program to read a 2*3 matrix and display it on screen.

#include<stdio.h>
#include<conio.h>
void main()
{
	int matrix[2][3],i,j;
	printf("Enter the matrix elements of 2*3 matrix:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("Displaying the matrix on the screen:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",matrix[i][j]);
		}
		printf("\n");
	}
	getch();
}
