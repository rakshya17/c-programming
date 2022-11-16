/*6.Write a program to calculate a raised to power b using user defined function with 
following prototype int power(int,int).*/

#include<stdio.h>
int power(int,int);
void main()
{
	int base,pow,b;
	printf("Enter the base and then power:");
	scanf("%d%d",&base,&pow);
	b=power(base,pow);
	printf("%d raised to the power %d is %d.",base,pow,b);
}
int power(int a,int b)
{
	int i,pow=1;
	for(i=0;i<b;i++)
	{
	pow=pow*a;	
	}
	return pow;
}
