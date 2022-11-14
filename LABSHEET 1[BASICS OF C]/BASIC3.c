//3.	Write a Program to calculate the area and circumference of the circle.      

#include<stdio.h>
#include<conio.h>
void main()
{
	float radius,area,circumference;
	printf("Enter the radius of circle : ");
	scanf("%f",&radius);
	circumference=2.0*3.14*radius;
	area=3.14*radius*radius;
	printf("\nThe circumference of the circle with radius %.3f is %.3f\n",radius,circumference);
	printf("\nThe area of the circle with radius %.3f is %.3f",radius,area);
	getch();
}
