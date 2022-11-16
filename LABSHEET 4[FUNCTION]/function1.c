/*2.Write a program to find out the largest among three numbers using user defined 
function.*/

#include<stdio.h>
#include<conio.h>
int largest(int,int,int);
void main()
{
	int a,b,c,d;
	printf("Enter three numbers of your choice:");
	scanf("%d%d%d",&a,&b,&c);
	d=largest(a,b,c);
	printf("The largest among %d , %d , %d is %d.",a,b,c,d);
	getch();
}
int largest(int a,int b,int c)
{
	if(a>b&&a>c)
	{
		return a;
	}
	else if(b>c&&b>a)
	{
		return b;
	}
	else
	{
		return c;
	}
}
