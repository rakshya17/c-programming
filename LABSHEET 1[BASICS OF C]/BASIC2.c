//2.	Write a program to calculate the surface area of cube. [Hint  area=6l2]

#include<stdio.h>
#include<conio.h>
void main()
{
	int side,area;
	printf("Enter the side of the cube : ");
	scanf("%d",&side);
	area=6*side*side;
	printf("\nThe surface area of the cube is %d.",area);
	getch();
	
}
