//5.Write a program to exchange two value using the pointer. (Call by address)

#include<stdio.h>
#include<conio.h>
int exchange(int *,int *);
void main()
{
	int a,b;
	printf("Enter the value of a and b :");
	scanf("%d%d",&a,&b);
	printf("\nBefore swapping a = %d\tb = %d\n",a,b);
	exchange(&a,&b);
	printf("After swapping a = %d\tb = %d",a,b);
	getch();
}
int exchange(int *a,int *b)
{
	int temp;
	temp = *a;
	*a=*b;
	*b=temp;
}

