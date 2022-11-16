//10.Write a program to calculate a raised to the power b using recursive function.

#include<stdio.h>
int power(int,int);
void main()
{
	int pow,base,k;
	printf("Enter the base and then power:");
	scanf("%d%d",&base,&pow);
	k=power(base,pow);
	printf("%d raised to the power %d is %d.",base,pow,k);
}
int power(int a,int b)
{
if(b==0)
{
	return 1;
}
else
{
	return a*power(a,b-1);
}
}
