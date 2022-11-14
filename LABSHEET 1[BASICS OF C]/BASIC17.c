//19.Write a program that ask the radius of sphere and print the volume of sphere.

#include<stdio.h>
#include<conio.h>
void main()
{
	float radius,volume;
	printf("Enter the radius :");
	scanf("%f",&radius);
	volume=1.33*3.14*radius*radius*radius;
	printf("The volume of a sphere with radius %.2f is %.2f.",radius,volume);
	getch();
}
