/*3.Write a function which receives a float and int from main(), finds the product of 
these two and returns the product which is printed through main.*/

#include<stdio.h>
#include<conio.h>
float product(int,float);
void main()
{
	int a;
	float b,c;
	printf("Enter a integer number and then a float number:");
	scanf("%d%f",&a,&b);
	c=product(a,b);
	printf("The product of %d and %.2f is %.2f.",a,b,c);
	getch();
}
float product(int a,float b)
{
	return a*b;
}

