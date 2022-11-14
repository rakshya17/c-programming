//1.Write a program find to addition, subtraction, multiplication and division of two numbers entered by the user.      

#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	float divison;
	printf("Enter two numbers of your choice:");
	scanf("%d%d",&a,&b);
	printf("\nThe sum is %d + %d = %d\n",a,b,a+b);
	printf("\nThe subraction is %d - %d = %d\n",a,b,a-b);
	printf("\nThe multiplication is %d * %d = %d\n",a,b,a*b);
	printf("\nThe divison is %d/%d = %d",a,b,a/b);
	getch();
}
