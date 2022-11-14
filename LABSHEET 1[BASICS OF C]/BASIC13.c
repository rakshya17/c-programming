/*14.Two numbers are input through the keyboard. 
Write a program to interchange the  the contents.*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,temp;
	printf("Enter two numbers a and b to interchange:");
	scanf("%d%d",&a,&b);
	printf("\nBefore interchange a=%d b=%d\n",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("\nAfter intechange a=%d b=%d",a,b);
	getch();
}
