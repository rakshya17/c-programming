//Write a program to accept 10 numbers and finds and prints the largest and smallest among those numbers.

#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[100],i,min,max;
	printf("Enter Ten Numbers:\n");
     for(i=0;i<10;i++)
{
		scanf("%d",&arr[i]);
	
		
}
printf("\n\nThe largest and smallest numbers are:\n\n");
min=arr[0];
for(i=0;i<10;i++)
{
		if(min>arr[i])
		{
			min=arr[i];
		}
	
}
max=arr[0];
for(i=0;i<10;i++)
{
		if(max<arr[i])
		{
			max=arr[i];
		}
}
printf("\n\nThe smallest is %d.",min);
printf("\n\nThe largest is %d.",max);
getch();



}
