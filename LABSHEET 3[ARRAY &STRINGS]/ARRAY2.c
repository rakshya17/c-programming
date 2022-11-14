//program to enter 10 different numbers and print them with array variables and their addresses.

#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[20],i;
	printf("Enter ten numbers:\n");
	for(i=0;i<10;i++)
	{
	scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++)
	{
			printf("arr[%d]=%d\n",i,arr[i]);
	}
getch();
}
